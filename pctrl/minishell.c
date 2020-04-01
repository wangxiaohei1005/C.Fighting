#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buf[] = "    ls   -l    -a  ";
    char *ptr = buf;
    char *n_argv[32] = {NULL};
    int n_argc = 0;
    while(*ptr != '\0') {
        if (*ptr != ' ') {  //当前字符不为空格 l  - -
            n_argv[n_argc] = ptr;  n_argc++;
            while(*ptr != ' ') ptr++;  //让ptr把ls走完，走到下一个空格处
            *ptr = '\0'; 
        }
        ptr++;
    }
    int i;
    for (i = 0; i < n_argc; i++) {
        printf("n_argv[%d]=[%s]\n", i, n_argv[i]);
    }
    return 0;
}
