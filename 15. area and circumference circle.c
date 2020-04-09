#include<stdio.h>
float pie=3.14;//global variable
int main()
{
	float radius,area, circum;//local variable
	printf("please enter the value of radius of circle:");
	scanf("%f",&radius);
	area=pie*radius*radius;
	circum=2*pie*radius;
	printf("area of cicle: %.2f\n", circum);
	printf("circumference of circle: %.2f\n", circum);
	
	getch();
    return 0;
}

	
