#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[]="KRITIK RAWAL";
	int len=strlen(name);
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",name[j]);
		}
		printf("\n");		
	}
	getch();
	return 0;
}
