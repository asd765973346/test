#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("������߳�");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
    s=(a+b+c)/2;
    area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
    printf("���=%f",area);
    }
    else
    {
        printf("�����������ζ���");
    }
    return 0;
}
