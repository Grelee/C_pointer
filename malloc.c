#include <stdio.h>
#include <stdlib.h>
void alter(int **p)
{
    int *q;
    q=(int *)malloc (sizeof(int));
    printf("%p\n",q);
    *q=100;
    *p=q;
}
int main()
{
    int a=19;
    int *p=&a;
    printf("%p,%p,%d\n",&a,p,*p);
    alter(&p);
    printf("%p,%p,%p,%d,%d\n",&a,p,&p,*p,a);
    return 0;
}