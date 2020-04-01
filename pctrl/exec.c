/*=============================================================== 
*   Copyright (C) . All rights reserved.")
*   文件名称： 
*   创 建 者：zhang
*   创建日期：
*   描    述：这个demo演示程序替换接口的基本使用与认识 
================================================================*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *env[])
{
    //execl("./mytest","mytest","-l",NULL);//对当前调用进程进行程序替换,去运行ls程序
    char *new_argv[] = {"mytest", "-l", "-p", NULL};
    char *new_env[] = {"MYVAL=1000", "TESTVAL=2000", NULL};
    execve("./mytest", new_argv, new_env);
    printf("nihaoa~~\n");
    return 0;
}

