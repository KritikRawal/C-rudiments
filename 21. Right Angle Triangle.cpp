#include<stdio.h>
int main()
{
	int i,j;
	char ch='A';
	printf("Right angle triangle:\n\n");
	for(i=0;i<7;i++)
	{
		for(j=0;j<=i;j++)
	    {
	    	printf("%c ",ch);
	    	ch++;
		}
		ch='A';
	
		printf("\n");
	}
	return 0;
	
}
