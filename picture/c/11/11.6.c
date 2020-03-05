#include<stdio.h>
#include<stdlib.h>
double Average(int*p,int n)
{
    int i, sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+p[i];
    }
    return (double)sum/n;
}
void InputArry(int*p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      scanf("%d",&p[i]);
    }
}

int main()
{
    int *p=NULL,n;
    double aver;
    printf("how many students");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("NO memory");
        exit(1);
    }
    InputArry(p,n);
    aver=Average(p,n);
    printf("aver=%.1f\n",aver);
    free(p);
    return 0;
}
