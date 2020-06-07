/*数组指针*/
#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int (*p)[5];
    int *ptr;
    p=&a;
    ptr=(int *)(p+1);//数组指针转换为整型指针
    printf("%p,%p\n",p,ptr);
    printf("%d\n",*(ptr-1));
    return 0;
}