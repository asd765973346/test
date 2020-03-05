#include<stdio.h>
int main()
{
    int i=2;
    int j;
    int result;
    if(i%2==0)
     {
      if (j%2==1)
        result=0;
      if(j%2==0)
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

