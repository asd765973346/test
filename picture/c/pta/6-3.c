#include <stdio.h>

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}
double mypow( double x, int n )
{
    float i,j=1;
    for(i=1;i<=n;i++)
        j*=x;
    return j;
}

