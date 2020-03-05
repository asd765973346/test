#include<stdio.h>
int main()
{
    float i,j,y,x;
    long n;
    scanf("%ld",&n);
    printf("intput n:");
    do{
        i=1;
        i=i*10;
        j=(n/i);
      }while(j>1);

     for(y=i;x<=n;y/10)
        {
        x=n/y;
        printf("%d ",x);
        }
    return 0;
}
