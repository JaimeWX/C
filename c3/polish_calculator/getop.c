#include <ctype.h>
#include <stdio.h>
#include "calc.h"

/* getop:  get next character or numeric operand */
int getop(char s[])
{
    int i, c;
    // 空格与tab是允许出现的非数字及运算符号，用于表示间隔，没有它们的话将无法分开多个连续数字
    while ((s[0] = c = getch()) == ' ' || c == '\t') 
        ;
    s[1] = '\0';
    if (!isdigit(c) && c != '.')
        return c;      /* not a number */
    i = 0;
    if (isdigit(c))    /* collect integer part */
        while (isdigit(s[++i] = c = getch()))
            ;
    if (c == '.')      /* collect fraction part */
        while (isdigit(s[++i] = c = getch()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}