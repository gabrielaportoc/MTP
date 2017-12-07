#include <stdio.h>
#include <math.h>

int main ()
{
	double r, b, n;
	printf("\nDigite um valor para o calculo do Log: \n\n");
	scanf("%lf", &n); getchar();
	printf("\nDigite um valor para a base do Log, diferente de 0: \n\n");
	scanf("%lf", &b); getchar();
	r = (log(n)/log(b));
	printf("\n%.4lf \n", r);
	return 0;
}
