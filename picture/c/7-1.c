#include<stdio.h>
#include<math.h>
int main()
{
    int N,i;
    float sum,S;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
       {
       S=sqrt(i);
       sum=sum+S;
       }
    printf("sum = %.2f",sum);
  return 0;
}
