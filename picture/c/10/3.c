#include<stdio.h>
#define N 15
int main()
{
    char name[N];
    char str[]="\"hello\",i said to";//��/����ת���ַ�
    printf("ENTER:");
    fgets(name,sizeof(name),stdin);
    printf("%s %s",str,name);
    return 0;
}
