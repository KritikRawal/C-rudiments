#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the range: ");
	scanf("%d",&n);
	printf("even numbers: ");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
			sum+=i;//sum=sum+i
		}
	}
	printf("n\nsum of even numbers: %d",sum);
	getch();
	return 0;
 } 
