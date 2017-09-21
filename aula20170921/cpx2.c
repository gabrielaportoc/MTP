#include <stdio.h>

int main ()
{
	float pr, pi, r, sub, soma;
	printf("\nDigite a parte real e a imaginaria: \n");
	scanf(" %f %f ", &pr, &pi);
	sub = pr - pi;
	soma = pr + pi;
	r = sub*soma;
	printf("%f", r);
	return 0;
}
