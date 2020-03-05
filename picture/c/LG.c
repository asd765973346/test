#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,disc,x1,x2;
     printf("please put in your number");
     scanf("%d%d%d",&a,&b,&c);
     disc=sqrt(b*b-4*a*c);
     d=-b/2*a;
     e=disc/2*a;
     if(disc>=0 && a!=0)
     {
         x1=d+e;
         x2=d-e;
         printf("x1=%f\nx2=%f\n",x1,x2);
     }
     else
     {
         printf("This equation has no solution");
     }
}
