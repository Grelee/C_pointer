#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int (*f[2])(int a,int b);
    f[0]=&add;
    f[1]=&mul;
    printf("a+b=%d,a*b=%d\n",f[0](1,2),f[1](1,2));
    return 0;

}