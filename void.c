#include <stdio.h>
#include<stdlib.h>
/*void型指针不能告诉编译器该对象的大小
int main ()
{
    int a=100;
    void *p;
    p=&a;
    printf("p:%p\n",p);
    printf("*p：%d\n",*p);
    return 0;
}
*/
int main ()
{
    void *p;
    int *q;
    p=malloc(sizeof(int));
    q=(int *)p;
    *q=100;
    printf("*q:%d,p:%p,q:%p\n",*q,p,q);
    return 0;

}