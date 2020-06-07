#include "max.h"
void *max(void *array[],int len,cmp func)
{
    int i;
    void *temp;
    temp=array[0];
    for(i=0;i<len;i++)
    {
        if((*func )(temp,array[i])==-1)
            temp=array[i];
    }
    return temp;
}