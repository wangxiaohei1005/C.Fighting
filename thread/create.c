/*=============================================================== 
*   Copyright (C) . All rights reserved.")
*   文件名称： 
*   创 建 者：zhang
*   创建日期：
*   描    述：这个demo体会线程的创建，以及线程独立执行 
================================================================*/

#include <stdio.h>
#include <unistd.h>  //sleep头文件
#include <string.h>  //字符串操作头文件
#include <pthread.h> //线程库接口头文件

int a = 100;

void *thr_start(void *arg)
{
    while(1) {
        printf("i am thread~~%s ---- %d\n", (char*)arg, a);
        sleep(1);
    }
    return NULL;
}
int main()
{
    pthread_t tid;
    char ptr[1024] = "chilema~~?";
    //pthread_create(获取线程id， 线程属性， 线程入口函数， 参数)
    int ret = pthread_create(&tid, NULL, thr_start, (void*)ptr);
    if (ret != 0) {
        printf("create thread failed!!\n");
        return -1;
    }
    printf("create thread success!! normal thread tid:%lu\n", tid);
    while(1) {
        printf("leihoua~~ ----%d\n", a);
        sleep(1);
    }
    return 0;
}
