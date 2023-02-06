#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Square of %d is %d ",n,square(n));
    return 0;
}
