#include<stdio.h>
void prime(int x)
{
    int i,n,flag;
    for(n=1;n<x;n++)
    {
        flag =0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d",n);
        }
    }
}
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    prime(x);
    return 0;
}
