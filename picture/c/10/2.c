#include<stdio.h>
#define N 3
int main()
{
    char name[N];
    char *ptr=name;
    printf("ENTER:");
    fgets(name,sizeof(name),stdin);
    printf("hello! %s",ptr);
    return 0;
}
