#include<stdio.h>
int main()
{
	char op;
	int num1,num2;
	printf("\t========Calculator========\n\n");
	printf("please enter any two integer number:\n");
	scanf("%d%d",&num1,&num2);
	printf("please choose any operator i.e.(+,-,*,/): ");
	op=getch();
	switch(op)
	{
		case'+':
			printf("sum= %d",num1+num2);
			break;
		case'-':
			printf("diff=%d",num1-num2);
			break;
		case'*':
			printf("mult= %d",num1*num2);
			break;
		case'/':
			printf("div=%d",num1/num2);
			break;
		default:
		    printf("error! invalid input");
    }
    return 0;				
}
