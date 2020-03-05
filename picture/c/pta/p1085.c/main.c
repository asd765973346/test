#include<stdio.h>
int main()
{
    int a,b=-1,count=0;
    int i,max=0,j;
    int s[7],k[7],z[7];
    int sum[8];
    for(i=0;i<=6;i++)//赋值
    {
    scanf("%d %d",&s[i],&k[i]);
    z[i]=s[i]+k[i];
    }
    for(i=0;i<=6;i++)//大于7赋值
    {
        if(z[i]>8)
          count++;
        else
          continue;
    }
    if(count>0)//求最大值
    {
     for ( i=0;i<6;i++)
     {
		if (max < z[i])
		{
         max = z[i];
         j=i;
        }
     }
     printf("%d",j+1);
    }
    else
    printf("0");
}
