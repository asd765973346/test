#include<stdio.h>
int main()
{
    int a=0,b=0;
    char c='A';
    int *pa=&a,*pb=&b;
    char *pc=&c;
    printf("a=%d,pa=%d",a,*pa);
    printf("a=%d,pa=%d",b,*pb);
    printf("c=%c,pc=%c",c,*pc);
    return 0;
}
