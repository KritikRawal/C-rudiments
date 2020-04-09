#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,sum=0;
	printf("enter the row and column for square matrix:\n");
	scanf("%d%d",&m,&n);
	int mat[m][n],i,j;
	printf("enter the elements in %d*%d matrix:\n",m,n);
	for(i=0;i<m;i++)//row
	{
		for(j=0;j<n;j++)//column
		{
			scanf("%d",&mat[i][j]);
		}
	}
	//diagonal
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	    	if(i==j)
		  {
			sum+=mat[i][j];
		  }
	}
	}
	printf("sum of diagonal of given matrix: %d",sum);
	getch();
	return 0;
}
