#include <stdio.h>
#include <stdlib.h>

int eprimo(unsigned int n) {
	unsigned int i;
	int v = 1;
	for(i = 2; i <= n/2; i++) 
		if(n%i == 0) {
			v = 0;
			break;
		}
	return v;
}

int mostra_soma_primos(unsigned int n) {
	int i, p = 0;
	for(i = 1; i <= n/2; i++)
		if(eprimo(i) && eprimo(n-i)) { 
			printf("%d + %d\n", i, n-i);
			p++;
		}
	return p;
}

int main() {
    unsigned int numero, possibilidades;
    printf("Entre com um numero: ");
    scanf("%u", &numero);
    if(eprimo(numero))
		printf("Primo!\n");
	else {
		possibilidades = mostra_soma_primos(numero);
		if(possibilidades > 0)
			printf("Sao %d possbilidades.", possibilidades);
		else
			printf("Não e primo nem expresso por soma de primos.\n");
	}
    printf("\n");
    return 0;
}
