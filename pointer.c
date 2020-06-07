#include <stdio.h>
struct test{
    int array[2];
    char ch;
};
typedef struct test Test;
int main ()
{
   
    Test var={0x12345678,0x12345678,0x30};
    printf("Test_size:%ld\n",sizeof(Test));
    char *p;
    Test *q;
    p=(char *)&var;
    printf("1 byte:0x%x,%d\n",*p,*p);
     printf("2 bytes:0x%x,%d\n",*(short *)p,*(short *)p);
     printf("4 bytes:0x%x\n",*(int *)p);
     printf("8 bytes:0x%llx\n",*(long long *)p);
     q=&var;
     printf("whole bytes:0x%x,0x%x,0x%x,%c\n",q->array[0],q->array[1],q->ch,q->ch);
    


}