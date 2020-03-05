#include<stdio.h>
long Fact(int n)
{
    int i;
    long result;
    for(i=2;i<=n;i++)
    {
        result*=i;
    }
    return result;
}
int main()
{
    int m;
    long ret;
    printf("Input your number:");
    scanf("%d",&m);
    ret=Fact(m);
    printf("%d!=%ld/n",m,ret);
    return 0;
}
