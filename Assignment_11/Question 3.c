#include<stdio.h>
int prime(int x)
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            return 0;
            break;
        }
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(prime(n)==1)
    {
        printf("%d is prime number",n);

    }
    else
    {
        printf("%d is not prime number",n);
    }
    return 0;
}
