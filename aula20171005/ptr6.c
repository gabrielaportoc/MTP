#include <stdio.h>

int main ()
{
	int *p,i = 0;
	char frase[16] = {0};
	printf("\nDIGITE UMA FRASE \n");
	fgets(frase,16,stdin);
	p = (int*)frase;
	for(i;i < sizeof(p); i++)
		printf("\n EM DECIMAL %d \n", *(p+i));
		printf("\n EM HEXADECIMAL %X \n", *(p+i));
	return 0;
}
