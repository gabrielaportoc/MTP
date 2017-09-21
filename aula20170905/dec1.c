#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int soma = 0;
	int x = rand() %6 +1;
	int y = rand() %6 +1;
	int z = rand() %6 +1;
	soma = x + y + z;
	printf("%d, %d, %d", x, y, z);
	if (soma == 7 || soma == 11)
		printf(" \nVoce ganhou :) \n");
	else 
		printf("\nVoce perdeu :/ \n");
	return 0;
}
