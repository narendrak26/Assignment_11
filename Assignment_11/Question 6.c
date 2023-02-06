#include<stdio.h>
void prime(int x,int y)
{
    int i,n,flag;
    for(n=x;n<y;n++)
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
        if(flag==0)
        {
            printf("%d ",n);
        }
    }
}
int main()
{
    int a,b;
    printf("Enter two  numbers\n");
    scanf("%d%d",&a,&b);
    printf("The prime numbers between %d to %d are \n",a,b);
    prime(a,b);
    return 0;
}
