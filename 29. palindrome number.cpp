#include<stdio.h>
#include<conio.h>
int palindrome(int);
int main()
{
	int num,pal;
	printf("enter any number for palindrome: ");
	scanf("%d",&num);
	pal=palindrome(num);
	if(num==pal)
	{
		printf("%d is a palindrome number",num);
	}
	else
	{
		printf("%d is not a palindrome number",num);
	}
	getch();
	return 0;
}
int palindrome(int num)
{
	static int sum=0,r;
	if(num!=0)
	{
		r=num%10;
		sum=sum*10+r;
		palindrome(num/10);//recursion call
	}
	return sum;
	
}
