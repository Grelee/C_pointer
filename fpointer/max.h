#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int (*cmp)(void *,void *);
typedef struct book* book;
struct book{
    int id;
    char name[10];
};
extern void *max(void *array[],int len,cmp func);
extern int cmp_int(void *,void *);
extern int cmp_struct(void *, void *);
extern int insert_struct(book *pos,int id,char *name);
extern int insert_int(int **pos,int val);