#include<stdio.h>
main()
{
    int x,b0,b1,b2,sum;
    printf("����������");
    scanf("%ld",&x);
    b2=x/100;//�����λ����
    b1=(x-b2*100)/10;/*����ʮλ����*/
    b0=x%10;//���λ���֣�%����
    sum=b1+b2+b0;
    printf("��λ:%d,ʮλ:%d,��λ:%d,�ܺ�:%d",b2,b1,b0,sum);
}
