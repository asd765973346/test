#include<stdio.h>
unsigned long Fact(unsigned int n)
{
    unsigned int i;
    unsigned long result=1;
    for(i=2;i<=n;i++)
    result*=i;
    return result;
}
int main()
{
    int m,k;
    unsigned long ret;
    do{
     printf("input your number m,k:");
     scanf("%d,%d",&m,&k);
      }while(m<k||m<=0||k<0);
    ret=Fact(m)/(Fact(k)*Fact(m-k));
    printf("result=%lu\n",ret);
    return 0;
}

