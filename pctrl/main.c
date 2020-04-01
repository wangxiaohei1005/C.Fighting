#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void test()
{
    exit(0);
    return ;
}
int main()
{
    printf("leihoua~~~\n");

    while(1) {
        sleep(1);
    }
    test();
    sleep(3);
    //return 0;
    //exit(0);
    _exit(0);
}
