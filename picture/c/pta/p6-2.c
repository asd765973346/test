#include <stdio.h>

double Power(double x, int n);

int main()
{
    double x;
    int n;
    scanf("%lg%d", &x, &n);
    printf("%g\n", Power(x, n));
    return 0;
}

double Power(double x, int n)
{
    int i;
    if(x==0)
       {
       printf("不正确的参数!\n");
       return 0;
       }
    if(n>0)
    {
        i=n;
        if(n==1)
            return x;
        if(n<=i)
            return x*Power(x,n-1);
    }
    if(n<0)
    {
        i=n;
        if(n==-1)
         return x;
        if(n==i)
            return 1/x*Power(x,n+1);
        if(n>i)
            return x*Power(x,n+1);
    }
    if(n==0)
        return 1;
}
