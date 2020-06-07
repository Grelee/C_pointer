#include "max.h"
int cmp_int(void *p,void *q)
{
    int *a,*b;
    a=(int *)p;
    b=(int *)q;
    if(*a>*b)
        return 1;
    else if(*a<*b)
            return -1;
        else 
            return 0;
}
int cmp_struct(void *p, void *q)
{
    book a,b;
    a=(book)p;
    b=(book)q;
    if(a->id>b->id)
        return 1;
    else if(a->id<b->id)
        return -1;
        else 
        return 0;

}