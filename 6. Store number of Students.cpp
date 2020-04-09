#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[50];
	int marks, i, num;
	
	printf("Enter tnumber of students you want to store: ");
	scanf("%d",&num);
	
	FILE *fptr;
	fptr = (fopen("abc.txt", "a"));//mode add
	if(fptr == NULL)
	{
		printf("Error!");
		exit(0);
	}
	for(i =0; i < num; i++)
	{
		printf("For student%d\nEnter name: ", i+1);
		scanf("%s",name);
		
		printf("Enter marks: ");
		scanf("%d", &marks);
		
		fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
	}
	fclose(fptr);
	return 0;
}
