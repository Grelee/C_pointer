/*指针与整型数据比较，需要将整型常量转换为指针变量*/
#include <stdio.h>
int main()
{
    int *p;
    if(p==(int *)0)
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
   
    
}