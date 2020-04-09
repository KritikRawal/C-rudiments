#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5],i;
	printf("enter 5 elements in an array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray elements in reverse order:\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	getch();
	return 0;
}
