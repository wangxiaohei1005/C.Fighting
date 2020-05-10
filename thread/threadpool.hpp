/*=============================================================== 
*   Copyright (C) . All rights reserved.")
*   文件名称： 
*   创 建 者：zhang
*   创建日期：
*   描    述：实现一个线程池 
================================================================*/
#include <cstdio>
#include <iostream>
#include <queue>
#include <stdlib.h>
#include <pthread.h>

typedef void (*handler_t)(int);
class ThreadTask
{
    public:
        ThreadTask(){
        }
        void SetTask(int data, handler_t handler) {
            _data = data;
            _handler = handler;
        }
        void Run() {//外部只需要调用Run，不需要关系任务如何处理
            return _handler(_data);
        }
    private:
        int _data;//任务中要处理的数据
        handler_t _handler;//任务中处理数据的方法
};

#define MAX_THREAD 5
class ThreadPool
{
    public:
        ThreadPool(int max_thr = MAX_THREAD):_thr_max(max_thr){
            pthread_mutex_init(&_mutex, NULL);
            pthread_cond_init(&_cond, NULL);
            for (int i = 0; i < _thr_max; i++) {
                pthread_t tid;
                int ret = pthread_create(&tid, NULL, thr_start, this);
                if (ret != 0) {
                    printf("thread create error\n");
                    exit(-1);
                }
            }
        }
        ~ThreadPool(){
            pthread_mutex_destroy(&_mutex);
            pthread_cond_destroy(&_cond);
        }
        bool TaskPush(ThreadTask &task) {
            pthread_mutex_lock(&_mutex);
            _queue.push(task);
            pthread_mutex_unlock(&_mutex);
            pthread_cond_broadcast(&_cond);//如对后唤醒所有线程，谁抢到谁处理
            return true;
        }
        // 类的成员函数，有一个隐藏的默认参数，是this指针
        // 线程入口函数，没有this指针，如何操作私有成员呢？？
        static void *thr_start(void *arg) {
            ThreadPool *p = (ThreadPool *) arg;
            //不断的从任务队列中取出任务，执行任务的Run接口就可以
            //每一个任务节点中包含了要处理的数据，以及如何处理的函数
            while(1) {
                pthread_mutex_lock(&p->_mutex);
                while(p->_queue.empty()) {
                    pthread_cond_wait(&p->_cond, &p->_mutex);
                }
                ThreadTask task;
                task = p->_queue.front();
                p->_queue.pop();
                pthread_mutex_unlock(&p->_mutex);
                task.Run();//任务的处理要放在解锁之外，因为当前的所保护的时队列的操作
            }
            return NULL;
        }
    private:
        int _thr_max; // 线程池中线程的最大数量--根据这个初始化创建指定数量的线程
        std::queue<ThreadTask> _queue;
        pthread_mutex_t _mutex;//保护队列操作的互斥锁
        pthread_cond_t _cond;//实现从队列中获取节点的同步条件变量
};

