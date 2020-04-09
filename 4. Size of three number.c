#include<stdio.h>
int main()
{
	int num1, num2,num3;
	printf("enter any three integer number:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3)
	{
		printf("%d is greater\n",num1);
		if(num2<num3)
		{
			printf("%d is smaller\n",num2);
		}
		else
		{
			printf("%d is smaller\n",num3);
		}
	}
	else if(num2>num1 && num2>num3)
	{
		printf("%d is greater\n",num2);
		if(num1<num3)
		{
			printf("%d is middle\n",num3);
			printf("%d is smaller\n",num1);
		}
		else 
		{
			printf("%d is middle\n",num1);
			printf("%d is smaller\n",num3);
		}
	}

    else if(num3>num1 && num3>num2)
	{
		printf("%d is greater\n",num3);
		if(num1<num2)
		{
			printf("%d is middle\n",num2);
			printf("%d is smaller\n",num1);
		}
		else 
		{
			printf("%d is middle\n",num1);
			printf("%d is smaller\n",num2);
		}
	}

return 0;
}
