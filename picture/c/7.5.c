#include<stdio.h>
long Fact(int n)
{
    if(n<0)
        return -1;
    else if (n==0||n==1)
        return 1;
    else
        return(n*Fact(n-1));
}
int main()
{
    int n;
    long result;
    printf("Input n:");
    scanf("%d",&n);
    result=Fact(n);
    if (result==-1)
        printf("n<0,data is error!\n");
    else
        printf("%d!=%ld\n",n,result);
    return 0;
}




