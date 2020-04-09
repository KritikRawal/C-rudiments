#include<stdio.h>
#include<conio.h>
void star();
void student_info();
void marks();
void calculation();
void get_details();
char fn[10],ln[10];
int roll,Class;
float en,ne,ma,co,sc;
int main()
{
	get_details();
	star();
	printf("\t\t\t\tRawal Institute\n");
	printf("\t\t\t\tKalanki, Kathmandu\n");
	star();
	student_info();
	star();
	marks();
	star();
	getch();
	return 0;
}
void star()
{
	int i;
	for(i=0;i<=79;i++)
	{
		printf("_");
	}
}
void student_info()
{
	printf("\nFirst Name: %s\t\t\t\t\t\t\tRoll Number: %d\n",fn,roll);
	printf("Last Name: %s\t\t\t\t\t\t\tGrade: %d\n",ln,Class);
}
void marks()
{
	printf("S.N.\t\tSubject\t\t\tF.M.\t\tP.M.\t\tO.M.\n");
    printf("1.\t\tEnglish\t\t\t100\t\t35\t\t%.2f\n",en);	
    printf("2.\t\tNepali\t\t\t100\t\t35\t\t%.2f\n",ne);
    printf("3.\t\tMath\t\t\t100\t\t35\t\t%.2f\n",ma);
    printf("4.\t\tScience\t\t\t100\t\t35\t\t%.2f\n",sc);
    printf("5.\t\tComputer\t\t100\t\t35\t\t%.2f\n",co);
}
void calculation()
{
	printf("\tTotal Marks: \t\t\tPercentage: ");
}
void get_details()
{
	printf("\n\tEnter your First Name:");
	scanf("%s",fn);
	printf("\n\tEnter your Last Name:");
	scanf("%s",fn);
	printf("\n\tEnter Roll Number:");
	scanf("%d",fn);
	printf("\n\tEnter your Class:");
	scanf("%d",&Class);
	
	system ("cls");
	
	printf("\n\tEnter the marks in following Subjects:\n");
	printf("\tEnglish: ");
	scanf("%f",&en);
	printf("\tNepali: ");
	scanf("%f",&en);
	printf("\tMathematics: ");
	scanf("%f",&ma);
	printf("\tComputer: ");
	scanf("%f",&co);
	printf("\tscience: ");
	scanf("%f",&sc);
	
	system("cls");
}

