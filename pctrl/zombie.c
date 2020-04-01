#include <stdio.h>//printf
#include <stdlib.h>//exit
#include <unistd.h>//sleep fork

int main()
{
    pid_t pid = fork();
    if (pid == 0) {
        //child
        sleep(5);
        exit(66);  //子进程5秒后退出，父进程什么都不做就会成为僵尸进程
    }
    //wait(NULL);//先暂时不考虑获取返回值
    int ret, status;
    while((ret= waitpid(pid, &status, WNOHANG)) == 0) {
        printf("现在子进程还没有退出---等一下再来看\n");
        sleep(1);
    }
    if ((status & 0x7f) == 0) {//通过低7位判断进程是否正常退出
        printf("status:%d\n", (status >> 8) & 0xff);//&位运算符   &&逻辑运算发
    }
    if (WIFEXITED(status)) {
        printf("status:%d\n", WEXITSTATUS(status));
    }
    while(1) {
        printf("-----正在打麻将-不要烦我-----\n");
        sleep(1);
    }
    return 0;
}
