#include<stdio.h>
int main()
{
    int a,b,i,ret,count=0;
    scanf("%d %d",&a,&b);
    for(;a<=b;a++)
    {
    i=1;
    do
    {
       i++;
       ret=a%i;
    }while( ret!=0 && i<=a);
    if(i<a)
       count++;
    else
       continue;
    }
    printf("%d",count);
    return 0;
}

