#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *env[])
{
    //argc 这个main函数的第一个参数--用于表示当前程序有多少个运行参数
    //argv 这个字符串指针数组用于存储当前程序的运行参数
    int i;
    for (i = 0; argv[i] != NULL; i++) {
        printf("argv[%d]=[%s]\n", i, argv[i]);
    }
    for (i = 0; env[i] != NULL; i++) {
        printf("env[%d]=[%s]\n", i, env[i]);
    }
    
    return 0;
}
