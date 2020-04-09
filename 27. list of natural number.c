#include<stdio.h>
int main()
{
	int a,n;
	printf("enter how many natural numbers you want: ");
	scanf("%d",&n);
	printf("%d natural numbers are:\n",n);
	for(a=1;a<=n;a++)
	{
		printf("%d\n",a);
	}
	return 0;
}

