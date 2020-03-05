#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    float a,b,c,A,s,L;
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    a=(float)sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=(float)sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c=(float)sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    if(a+b>c && a+c>b && b+c>a)
      {
       s=(a+b+c)/2.0;
       A=(float)sqrt(s*(s-a)*(s-b)*(s-c));
       L=(a+b+c)/1;
       printf("L = %.2f,A = %.2f",L,A);
      }
    else
       printf("Impossible");
    return 0;
}
