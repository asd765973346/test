#include<stdio.h>
long Fact(int n)
{
    int i;
    long result=1;
    if(n<0)
    {
        return -1;
    }
    else
    {
    for(i=1;i<=n;i++)
        result=i*result;
    return result;
    }
}
int main()
{
    int m;
    long ret;
    printf("input your number:");
    scanf("%d",&m);
    ret=Fact(m);
    if(ret==-1)
         printf("data is error\n");
    else
         printf("%d!=%ld\n",m,ret);
    return 0;
}
