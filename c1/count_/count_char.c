#include <stdio.h>
/*
Linux:
    ctrl + d 产生EOF输出，跳出循环
    ctrl + z 程序外部强制结束
*/
main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc-1);
}