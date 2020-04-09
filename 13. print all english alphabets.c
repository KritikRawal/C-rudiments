/*ASCII= american standard code for inforal interchange. (A-Z)=65-90 (a-z)=(97-122)*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("print alphabet from A-Z in upper case:\n");
	for(i=65;i<=90;i++)
	{
		printf("%c ",i);
	}
	printf("\n\nprint alphabets from a-z in lower case;\n");
	for(i=97;i<=122;i++)
	{
		printf("%c ",i);
	}
	getch();
	return 0;
 } 
