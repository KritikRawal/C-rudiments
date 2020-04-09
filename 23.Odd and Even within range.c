#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the range: ");
	scanf("%d",&n);
	printf("odd\t\teven\n\n");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		else
		{
			printf("%d\t\t",i);
		}
	}
	return 0;
}
