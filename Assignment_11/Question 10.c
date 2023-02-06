#include<stdio.h>
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int sum(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
    {

        s=s+(fact(i)/i);
    }
    return s;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Sum = %d",sum(n));
    return 0;
}
