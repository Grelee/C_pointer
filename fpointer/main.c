#include "common.h"
int main()
{
    int a,b,temp;
    a=10;
    b=4;
    p1=add;
    p2=sub;
    p3=mul;
    p4=div;
    temp=(*p1)(a,b);
    printf("a+b=%d\n",temp);
     temp=(*p2)(a,b);
    printf("a-b=%d\n",temp);
     temp=(*p3)(a,b);
    printf("a*b=%d\n",temp);
     temp=(*p4)(a,b);
    printf("a/b=%d\n",temp);
    return 0;
}