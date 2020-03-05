#include<stdio.h>
int main()
{
    int data[10] = {7, 5, -2, 78, 45, 98, -13, 67, 40, 99};
    int i,j,temp;//½»»»·¨ÅÅĞò
    for (i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(data[j]>data[i])
            {
                temp=data[j];
                data[j]=data[i];
                data[i]=temp;
            }
        }
    }
    for(i=0;i<9;i++)//´òÓ¡ÅÅĞò
   {
    printf("%d>",data[i]);
   }
    printf("%d",data[9]);
    return 0;
}
