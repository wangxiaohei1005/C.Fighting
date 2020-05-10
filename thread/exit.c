#include <stdio.h>
#include  <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void function()
{
    //char ptr[] = "这是我的返回值";//ptr有一块空间在栈中，将字符串的值赋值进去
    char *ptr = "这是我的返回值"; //字符串在常量区，ptr只是保存了这个常量区的地址
    pthread_exit((void*)ptr);//在任意位置调用，都可以退出调用线程
}
void *thr_start(void *arg)
{
    //pthread_self 返回调用线程的tid
    //pthread_detach(pthread_t tid);
    pthread_t tid = pthread_self();
    pthread_detach(tid);//自己分离自己---实际上就是设置个属性而已
    while(1) {
        printf("i am normal thread\n");
        sleep(5);
        function();
    }
    return NULL;
}
int main()
{
    pthread_t tid;
    int ret = pthread_create(&tid, NULL, thr_start, NULL);
    if (ret != 0) {
        printf("create thread failed!!\n");
        return -1;
    }
    //char *ptr;
    //pthread_join(tid, (void**)&ptr);
    //printf("retval:%s\n", ptr);
    //pthread_cancel(tid);
    while(1) {
        printf("i am main thread\n");
        sleep(1);
    }
    return 0;
}
