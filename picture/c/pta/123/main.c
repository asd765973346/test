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
       printf("����ȷ�Ĳ���!");
       return 0;
    if(n>0)
    {
        i=n;
        if(n==1)
            return x;
        if(n<=i)
            return x*double Power(double x,int n-1);
    }
    if(n<0)
        {
        i=n;
        if(n==-1)
         return x;
        if(n==i)
            return 1/x*double Power(double x, int n+1);
        if(n<i)
            return x*double Power(double x, int n+1);

}
