#include<stdio.h>

void f(int &p)
{
    printf("\n%x",&p);
    printf("\n%x",p);
    p=0xff;
}
int main()
{
    int a=0x10;
    printf("\n%x",&a);
    printf("\n%x\n",a);
    f(a);
    printf("\n%x\n",a);
    return 0;
}