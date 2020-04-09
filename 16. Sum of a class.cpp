#include <stdio.h>
int main()
{
	int i, Class[6],sum = 0;
	printf("Enter 6 numbers:\n");
	for(i=0; i < 6;i++)
	{
		//(class + i) is equivalent to &class[i]
		scanf("%d",(Class +i));
		
		// *(class +i) is equivalent to class[i]
		sum +=*(Class + i);
	}
	printf("Sum = %d", sum);
	return 0;
}
