#include<stdio.h>
#include<conio.h>
int main()
{
	int marks[5],i;
	printf("enter any 5 element in an array:\n");
	for(i=0;i<5;i++)
	{
		printf("element[%d] = ",i+1);
		scanf("%d",&marks[i]);
	}
	printf("\ndisplaying array element:\n");
	for(i=0;i<5;i++)
	{
		printf("element[%d] = %d\n",i+1,marks[i]);
	}
	return 0;
}
