#include <stdio.h>
#define a *p
#define b *q
int main()
{
    int *p,*q;
    int x=1;
    p=&x;
    q=&x;
    a=2;
    b=3;
    printf("%d\n",a+b);
    return 0;   
}