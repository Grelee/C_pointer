#include "max.h"
#define MAX 3
int main()
{
    book array1[MAX];
    int *array[MAX];
    int i,id,val;
    char name[10];
    book temp1;
    int *temp2;
    for(i=0;i<MAX;i++)
    {
        printf("input the info of book:\n");
        scanf("%d",&id);
        scanf("%s",name);
        if(insert_struct(array1+i,id,name)==-1)
        {
            exit(1);
        }
        printf("input the int:\n");
        scanf("%d",&val);
        if(insert_int(array+i,val)==-1)
        {
            exit(1);
        }
    }
    temp1=(book)max((void ** )array1,MAX,cmp_struct);
    temp2=(int *)max((void**)array,MAX,cmp_int);
    printf("the max of books:%d,%s\n",temp1->id,temp1->name);
    printf("the max of int:%d\n",*temp2);
    return 0;

}