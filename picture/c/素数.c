#include<stdio.h>
int Isprime(int b)
/*输入整数 int a
  输出因子*/
{
    int  a,ret,i,j,sum=0;
    for(a=2;a<=b;a++)
    {
    i=1;
    do
    {
      i++;
      ret=a%i;
    }while(ret!=0);
    if(i<a)
        sum=sum+a;
    else
        continue;
    }
    return sum;
}
int main()
{
    int n,ret;
    scanf("%d",&n);
    ret=Isprime(n);
    printf("%d",ret);
    return 0;
}


