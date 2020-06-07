#include "max.h"
int insert_struct(book *pos,int id,char *name)
{
    book p;
    p=(book)malloc(sizeof(struct book));
    if(p==NULL)
    {
        perror("failed to malloc\n");
        return -1;
    }
    p->id=id;
    strcpy(p->name,name);
    *pos =p;
    return 0;
}
int insert_int(int **pos,int val)
{
    int *p;
    p=(int *)malloc(sizeof(int));
    *p=val;
    *pos =p;
    return 0;
}