#include<stdio.h>
main()
{
    int x,b0,b1,b2,sum;
    printf("请输入数字");
    scanf("%ld",&x);
    b2=x/100;//计算百位数字
    b1=(x-b2*100)/10;/*计算十位数字*/
    b0=x%10;//求个位数字，%求余
    sum=b1+b2+b0;
    printf("百位:%d,十位:%d,个位:%d,总和:%d",b2,b1,b0,sum);
}
