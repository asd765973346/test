#include <string.h>
#include<stdio.h>
#define H 3
#define L 3
int main( )
{
  int i,j;
  char a[H][L];
  for(i=0;i<=2;i++)
    {
      scanf("%s",&a[i]);
    }
    for(i=2;i>=0;i--)
    {
        printf("%s\0",a[i]);
    }
  return 0;
}
