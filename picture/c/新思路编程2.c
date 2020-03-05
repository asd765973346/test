#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4;
    float a,b,c,d,z1,z2;
    float x,y;
    float k1,k2;
    scanf("%f %f\n%f %f\n%f %f\n%f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    k1=(y1-y2)/(x1-x2);//求两直线斜率
    k2=(y3-y4)/(x3-x4);
    if(k1==k2)//验证是否是平行线
        printf("没有找到");
    else
        a=y1-y2;
        b=x2-x1;
        z1=y1*(x2-x1)-x1*(y2-y1);
        c=y3-y4;
        d=x4-x3;
        z2=y3*(x4-x3)-x3*(y4-y3);
        x=(d*z1-b*z2)/(a*d-b*c);
        y=(a*z2-c*z1)/(a*d-b*c);
        printf("(%f,%f)",x,y);
   return 0;
}
