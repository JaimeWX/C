#include <stdio.h>
#include "calc.h"

#define BUFSIZE 100

static char buf[BUFSIZE];    /* buffer for ungetch */
static int bufp = 0;         /* next free position in buf */

// 这两个函数可被看作是“压入”与“释放”缓冲区

int getch(void)  /* get a (possibly pushed-back) character */
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)   /* push character back on input */
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}