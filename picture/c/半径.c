#include<stdio.h>
main()
{
    float r,circum,area;
    scanf("%f", &r);
    circum=2*3.14159*r;
    area=3.14159*r*r;
    printf("周长circum=%f/n/",circum);
    printf("面积area=%f/n/",area);
    return 0;
}
