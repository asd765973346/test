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
        printf("双重if\n");
        if(a>100)
            printf("3重if\n");
        }
        if(a<10)
            printf("并列if\n");
    }
    else if(a<0)
        printf("else if 也是并列if\n");
    }
}
