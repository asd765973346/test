#include<stdio.h>
int main()
{
    int data1,data2;
    char op;
    printf("please enter an experssion:");
    scanf("%d%c%d",&data1,&op,&data2);
    switch(op)
    {
    case '+':
        printf("%d+%d=%d\n",data1,data2,data1+data2);
        break;
    case '-':
        printf("%d-%d=%d\n",data1,data2,data1-data2);
        break;
    case '*':
        printf("%d*%d=%d\n",data1,data2,data1*data2);
        break;
    case '/':
        if(data2!=0)
        printf("%d/%d=%d\n",data1,data2,data1/data2);
        else
        printf("dibidend can't be  zero");
        break;
    default:
        printf("invalid operator\n");
    }
    return 0;
}
