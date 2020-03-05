#include<stdio.h>
int IsPrime(int a)
{
    int ret,i,j,sum=0;
    i=1;
    do
    {
       i++;
       ret=a%i;
    }while(ret!=0 && i<=a);
    if(i<a)
       {
        for(j=1;j<=a;j++)
       {
           ret=a%j;
           if(ret==0)
            sum=sum+a;
           else
            continue;
       }
       }
    return sum;
}
int main()
{
    int n,ret;
    scanf("%d",&n);
    ret=IsPrime(n);
    printf("%d",ret);
}
