#include <cstdio>
#include <iostream>
#include <queue>
#include <pthread.h>

//线程安全的阻塞队列--没有数据则消费者阻塞/数据满了则生产者阻塞

#define QUEUE_MAX 5
class BlockQueue
{
    public:
        BlockQueue(int maxq = QUEUE_MAX):_num(5), _capacity(maxq){
            pthread_mutex_init(&_mutex, NULL);
            pthread_cond_init(&_pro_cond, NULL);
            pthread_cond_init(&_cus_cond, NULL);
        }
        ~BlockQueue(){
            pthread_mutex_destroy(&_mutex);
            pthread_cond_destroy(&_pro_cond);
            pthread_cond_destroy(&_cus_cond);
        }
        bool Push(int data) {
            //生产者才会入队数据，如果队列中数据满了则需要阻塞
            pthread_mutex_lock(&_mutex);
            //_queue.size() 获取队列节点个数
            while (_queue.size() == _capacity) {
                pthread_cond_wait(&_pro_cond, &_mutex);
            }
            _queue.push(data);//_queue.push() 入队操作
            pthread_mutex_unlock(&_mutex);//解锁
            pthread_cond_signal(&_cus_cond);//唤醒消费者
            return true;
        }
        bool Pop(int *data) {
            //出队都是消费者，有数据才能出队，没有数据要阻塞
            pthread_mutex_lock(&_mutex);
            //_queue.empty()  若queue为NULL则 返回true
            while (_queue.empty()) {
                pthread_cond_wait(&_cus_cond, &_mutex);
            }
            *data = _queue.front();//_queue.front() 获取队首节点数据
            _queue.pop();//出队
            pthread_mutex_unlock(&_mutex);
            pthread_cond_signal(&_pro_cond);
            return true;
        }
    private:
        std::queue<int> _queue;
        int _capacity;
        int _num;

        pthread_mutex_t _mutex;
        pthread_cond_t _pro_cond;
        pthread_cond_t _cus_cond;
};

void *thr_productor(void *arg) 
{
    //这个参数是我们的主线程传递过来的数据
    BlockQueue *queue = (BlockQueue*)arg;//类型强转
    int i = 0;
    while(1) {
        //生产者不断生产数据
        queue->Push(i);//通过Push接口操作queue中的成员变量
        printf("productor push data:%d\n", i++);
    }
    return NULL;
}
void *thr_customer(void *arg) 
{
    BlockQueue *queue = (BlockQueue*)arg;
    while(1) {
        //消费者不断获取数据进行处理
        int data;
        queue->Pop(&data);
        printf("customer pop data:%d\n", data);
    }
    return NULL;
}
int main()
{
    int ret, i;
    pthread_t ptid[4], ctid[4];
    BlockQueue queue;

    for (i = 0; i < 4; i++) {
        ret = pthread_create(&ptid[i], NULL, thr_productor, (void*)&queue);
        if (ret != 0) {
            printf("create productor thread error\n");
            return -1;
        }
        ret = pthread_create(&ctid[i], NULL, thr_customer, (void*)&queue);
        if (ret != 0) {
            printf("create productor thread error\n");
            return -1;
        }
    }
    for (i = 0; i < 4; i++) {
        pthread_join(ptid[i], NULL);
        pthread_join(ctid[i], NULL);
    }
    return 0;
}
