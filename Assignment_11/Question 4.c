#include<stdio.h>
int prime(int x)
{
    int i,n,flag;
    for(n=x+1;n<100;n+1)
    {
        flag=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if((flag==0)&&(n!=1))
        {
            return n;
            break;
        }
    }
}
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("%d",prime(x));
    return 0;
}
