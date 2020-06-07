#include <stdio.h>
void swap(int* m,int* n)
{
	printf("*m=%d,*n=%d\n",*m,*n);

	int temp;
	temp=*m;*m=*n;*n=temp;
	printf("*m=%d,*n=%d\n",*m,*n);
	printf("m=%p,n=%p\n",m,n);
}
int main()
{
	int a,b;
	a=8;
	b=9;
	printf("before swap:\n");
	printf("a=%d,b=%d\n",a,b);
	printf("a地址：%p,b地址：%p\n",&a,&b);
	swap(&a,&b);
	printf("after swap:\n");
	printf("a=%d,b=%d\n",a,b);
	printf("a地址：%p,b地址：%p\n",&a,&b);
	return 0;
}
