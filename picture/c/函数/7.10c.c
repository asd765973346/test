#include<stdio.h>
long Func(int n)
{
    static long p=1;
    p=p*n;
    return p;
}
int main()
{
    int n,result,i;
    printf("intput N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=Func(i);
        printf("%d!=%d\n",i,result);
    }
    return 0;
}
