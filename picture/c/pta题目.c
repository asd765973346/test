#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    b=a/100;//��λ//
    c=(a-100*b)/10;//ʮλ
    d=a%10;//��λ//
    e=d*100+c*10+b;
    printf("%d/n",e);
    return 0;

}
