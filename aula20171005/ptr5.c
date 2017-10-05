#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int n = 0, i = 0 , esc, vetor[1000],cont = 0;
	unsigned char *p;
	for(i ; i < 1000; i++)
		vetor[i] = rand()%32787;
	p = (unsigned char *) vetor;
	printf("\n DIGITE UM NUMERO ENTRE 0 E 255 \n");
	scanf("%d", &esc); getchar();
	for(n ; n < sizeof(vetor) ; n++)
	{
		if(vetor[n] == esc)
		{
			cont++;		
			printf("\n END: %p \n DADO: %d \n",p,vetor[n]);		
		}		
	}
	printf("\n NUMERO %d TEM %d BYTES LOCALIZADOS \n", esc, cont);
	return 0;
}
