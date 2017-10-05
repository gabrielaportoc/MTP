#include <stdio.h>

int main ()
{
	int vetor[4] = {0}, i = 0, k = 0;
	char *p;
	for(i ; i < 4; i++)
	{
		printf("\n ESCREVA NO VETOR[%d] : ", i+1);
		scanf("%d", &vetor[i]);
	}
	p = (char*)vetor;
	for(k ; k < sizeof(vetor); k++)
		printf("%c ", *(p+k));
	return 0;
}
