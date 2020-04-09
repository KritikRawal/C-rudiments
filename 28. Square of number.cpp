#include<stdio.h>
#include<conio.h>
float square(float);//function decleration(porototype)
void mult();//function declaration
int main()
{
	float num,squ;
	printf("enter any number: ");
	scanf("%f",&num);
	squ=square(num);//function call
	printf("the square of %.2f is %.2f",num,squ);
	mult();//function call
	getch();
	return 0;
}
float square(float a)//function defination
{
	return(a*a);
}
void mult()
{
	int a,b;
	printf("\n\nenter any two numbers: ");
	scanf("%d%d",&a,&b);
	printf("the multiplication of %d and %d is %d",a,b,a*b);
}
