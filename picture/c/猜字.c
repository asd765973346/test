#include<stdlib.h>
#include<stdio.h>
int main()
{
    int magic;
    int guess;
    magic=rand();
    printf("please input a magic number:");
    scanf("%d",&guess);
    if(guess>magic)
        printf("Too BIG");
    else if (guess<magic)
        printf("Too small");
    else
        printf("right");
    return 0;
}
