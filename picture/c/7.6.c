#include<stdio.h>
int count;
long Fib(int n)
{
    count++;
    float result;
    if(n==0)
       {
    return 0;
       }
    else if(n==1)
       {
       return 1;
       }
    else
        {
        result=Fib(n-1)+Fib(n-2);
        return  result;
        }
}
int main()
{
    int n,i,x;
    printf("Intput n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        x=Fib(i);
        printf("%d  \t",count);
        printf("Fib(%d)=%d\n",i,x);
    }
    return 0;
}
