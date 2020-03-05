#include<stdio.h>
main()

{

	char str[]="xyz",*ps=str;

	while(*ps) ps++;

	for(ps--;ps-str>=0;ps--) puts(ps);

}
