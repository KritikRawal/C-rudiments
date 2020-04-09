#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int num,f;
	printf("enter any number to find its factorial: ");
	scanf("%d",&num);
	f=factorial(num);
	printf("factorial of %d is %d",num,f);
	getch();
	return 0;
}
int factorial(int num)
{
	if(num==1)
	return 1;
	else
	return(num*factorial(num-1));//recursion call
}
