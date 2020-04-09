#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[2][3][2],i,j,k;
	printf("enter 12 elements in an array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	//display
	printf("\n\ndisplaying elements in an array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		    for(k=0;k<2;k++)
           {
				   		
			 printf("arr[%d][%d][%d] = %d\n",i,j,k,arr[i][j][k]);
		   }
		}
	}
	getch();
	return 0;
}
