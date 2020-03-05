#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("请输入边长");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
    s=(a+b+c)/2;
    area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
    printf("面积=%f",area);
    }
    else
    {
        printf("不符合三角形定理");
    }
    return 0;
}
