#include<stdio.h>
int main()
{
    int a;
    while(1)
    {
    printf("input A:");
    scanf("%d",&a);

    if (a>0)
    {
        if(a>=10)
        {
        printf("˫��if\n");
        if(a>100)
            printf("3��if\n");
        }
        if(a<10)
            printf("����if\n");
    }
    else if(a<0)
        printf("else if Ҳ�ǲ���if\n");
    }
}
