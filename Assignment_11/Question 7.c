#include<stdio.h>
void fib(int x)
{
    int a=0,b=1,c,i;
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=2;i<=x;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }

}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The Fibonacci series are\n");
    fib(n);
    return 0;
}
