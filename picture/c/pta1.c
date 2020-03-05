#include<stdio.h>
int main()
{
    int x,a,b,c,d,count=0,ret;
    scanf("%d",&x);
     for(a=1;d>=0;a++)
      {
       d=x-8-5*(a-1);
       ret=0;
      for(b=1;ret>=0;b++)
        {
          ret=x-8-5*(a-1)-2*(b-1);
            if(ret>=0)
                {
                c=ret+1;
                count++;
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",a,b,c,a+b+c);
                }
            else
                break;
        }
      }
printf("count = %d",count);
return 0;
}
