#include <stdio.h>

int main ()
{
	int N1;
	printf("\ndigite um numero inteiro \n");
	scanf("%d", &N1);
	if(N1%2 == 0)
	{
		printf("PAR \n");
		if(N1%3 == 0)
			printf("mult.3 \n");
		if(N1%7 == 0)
			printf("mult.7 \n");
	}
	else
	{
		printf("IMPAR \n");
		if(N1%5 == 0)
			printf("mult.5 \n");
	}
	return 0;
}
