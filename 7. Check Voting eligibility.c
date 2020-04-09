#include<stdio.h>
int main()
{
	int age;
	printf("please enter your age:\n");
	scanf("%d",&age);
	if(age>=18)
{
    printf("you are eliible to vote");
	}	
	else
	{
		printf("you are not eligible to vote");
	}
	return 0;
}
