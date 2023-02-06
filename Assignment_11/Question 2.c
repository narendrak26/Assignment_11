#include<stdio.h>
int HCF(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            return (x*y)/i;
        }
    }
}
int main()
{
    int a,b,s;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    s=HCF(a,b);
    printf("HCf of %d and %d is %d",a,b,s);
    return 0;
}
