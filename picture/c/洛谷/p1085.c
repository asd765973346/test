#include<stdio.h>
int main()
{
    int a,b=-1,count=0;
    int i,max;
    int s[7],k[7],z[7];
    int sum[8];
    printf("input your days:");
    for(i=0;i<=6;i++)//赋值
    {
    scanf("%d %d",&s[i],&k[i]);
    z[i]=s[i]+k[i];
    }
    for(i=0;i<=6;i++)//大于7赋值
    {
        if(z[i]>8)
          {
          count++;
          b++;
          sum[b]=z[i];
          }
        else
          continue;
    }
    if(count>0)//求最大值
    {
     for ( i=0;i<6;i++)
     {
		if (max < sum[i])
		{
         max = sum[i];
        }
     }
     printf("%d",max);
    }
    else
    printf("0");
}
