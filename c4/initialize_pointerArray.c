/*
考虑这样一个问题：
    编写一个函数month_name(n)，它返回一个指向第n个月的名字的字符串的指针。这是内部static数组的一种理想的应用场景。
*/

#include <stdio.h>

char *month_name(int n);

main()
{
    int n = 8;
    printf("%s\n",month_name(n));
}

/*
指针数组的初始化语法与普通数组类似。其中每个元素是一个字符指针，因此可以使用字符串常量初始化。
第i个字符串存储在另外的某个位置，指向它的指针存储在name[i]中。由于没有指定数组name的长度，编译器将统计初值个数并填入数组长度。
*/


/* month_name:  return name of n-th month */
char *month_name(int n)
{
    static char *name[] = {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    return n < 1 || n > 12 ? name[0] : name[n];
}

