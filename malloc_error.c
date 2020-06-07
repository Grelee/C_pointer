/*此程序中p指向的地址并没有改变，只是修改了p的一个副本,正确程序为malloc.c*/
#include <stdio.h>
#include <stdlib.h>
void alter(int *p)
{
    p=(int *)malloc (sizeof(int));
    *p=100;
}
int main()
{
    int a=100;
    int *p;
    p=&a;
    printf("%p,%d\n",p,*p);
    alter(p);
    printf("%p,%d\n",p,*p);
    return 0;
}