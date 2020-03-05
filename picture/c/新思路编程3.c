#include<stdio.h>
int GetState(int i,int j)
{
    int i,j;
    int result;
    if(i%2==0)
     {
      if (j%2==1)
        result=0;
      if (j%2==0)
        result=1;
    }
    if(i&2!=0)
    {
       if(j%2==1)
        result=0;
       if(j%2==0)
        result=1;
    }
      return result;
}
int main()
{
    int i,j,c,ret;
    scanf("%d%d",a,b);
    ret=GetState(a,b);
    printf("%d",ret);
    return 0;
}
