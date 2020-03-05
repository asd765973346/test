#include<stdio.h>
int main()
{
    int i,j,y,x;
    long n,t;
    printf("intput n:");
    scanf("%ld",&n);
    t=n;
    x=1;
    while(t>9)
    {
      t=t/10;
      x=x*10;
    }
    printf("%d",n/10);
    return 0;
}
