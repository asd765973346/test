#include <stdio.h>
#include <math.h>

// 求幂(递归版)
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
    if(x==0)
        printf("不正确的参数!");
        return 0;
    if(n==1)
        return x;
    else
        return (x *Power (x,n-1));
}
