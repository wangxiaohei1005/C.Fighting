#include <cstdio>
#include <iostream>
#include <vector>
#include <pthread.h>
#include <semaphore.h>

#define QUEUE_MAX 5
class RingQueue{
    public:
        RingQueue(int maxq = QUEUE_MAX):_queue(maxq), _capacity(maxq),
        _step_read(0), _step_write(0){
            //sem_init(信号量， 进程/线程标志， 信号量初值)
            sem_init(&_lock, 0, 1);//用于实现互斥锁
            sem_init(&_sem_data, 0, 0);//数据空间计数初始为0
            sem_init(&_sem_idle, 0, maxq);//空闲空间计数初始为节点个数
        }
        ~RingQueue(){
            sem_destroy(&_lock);
            sem_destroy(&_sem_data);
            sem_destroy(&_sem_idle);
        }
        bool Push(int data){
            //1. 判断是否能够访问资源,不能访问则阻塞
            sem_wait(&_sem_idle);//-空闲空间计数的判断,空闲空间计数-1
            //2. 能访问，则加锁，保护访问过程
            sem_wait(&_lock);//lock计数不大于1，当前若可以访问则-1，别人就不能访问了
            //3. 资源的访问
            _queue[_step_write] = data;
            _step_write = (_step_write + 1) % _capacity;//走到最后，从头开始
            //4. 解锁
            sem_post(&_lock);//lock计数+1，唤醒其它因为加锁阻塞的线程
            //5. 入队数据之后，数据空间计数+1，唤醒消费者
            sem_post(&_sem_data);
            return true;
        }
        bool Pop(int *data){
            sem_wait(&_sem_data);//有没有数据
            sem_wait(&_lock); // 有数据则加锁保护访问数据的过程
            *data = _queue[_step_read]; //获取数据
            _step_read = (_step_read + 1) % _capacity;
            sem_post(&_lock); // 解锁操作
            sem_post(&_sem_idle);//取出数据，则空闲空间计数+1，唤醒生产者
            return true;
        }
    private:
    std::vector<int> _queue; // 数组, vector需要初始化节点数量
    int _capacity; // 这是队列的容量
    int _step_read; // 获取数据的位置下标
    int _step_write;//写入数据的位置下标
    //这个信号量用于实现互斥
    sem_t _lock ;
    //这个信号量用于对空闲空间进行计数
    //---对于生产者来空闲空间计数>0的时候才能写数据 --- 初始为节点个数
    sem_t _sem_idle; 
    // 这个信号量用于对具有数据的空间进行计数
    // ---对于消费者来说有数据的空间计数>0的时候才能取出数据 -- 初始为0
    sem_t _sem_data; 
};


void *thr_productor(void *arg) 
{
    //这个参数是我们的主线程传递过来的数据
    RingQueue *queue = (RingQueue*)arg;//类型强转
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
    RingQueue *queue = (RingQueue*)arg;
    while(1) {
        //消费者不断获取数据进行处理
        int data;
        queue->Pop(&data);
        printf("tid:%p customer pop data:%d\n", pthread_self(), data);
    }
    return NULL;
}
int main()
{
    int ret, i;
    pthread_t ptid[4], ctid[4];
    RingQueue queue;

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
