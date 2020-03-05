#include<stdio.h>
#define PI 3.14159
main()
{
    double r;
    printf("请输入半径");
    scanf("%lf",&r);
    printf("周长=%f/n",2*PI*r);
    printf("面积=%f/n",PI*r*r);
}
