/*指针的指针*/
#include <stdio.h>
int main()
{
	int i=100;
	int *p1=&i;
	int **p2=&p1;
	printf("%d,%p,%p,%d\n",i,&i,p1,*p1);
	printf("%p,%p,%p,%d\n",&p1,p2,*p2,**p2);
	printf("0x%x\n",*p1);
	printf("\n");
	return 0;
	
}
