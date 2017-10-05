#include <stdio.h>

int main ()
{
	double N1, N2, soma;
	printf("\n DIGITE DOIS NUMEROS \n");
	scanf("%lf %lf", &N1, &N2); getchar();
	printf("\n O NUMERO %.3lf ESTA NO END. %p \n O NUMERO %.3lf ESTA NO END %p \n", N1, N1, N2, &N2);
	soma = N1 + N2;
	printf("\n A SOMA DE %.3lf + %.3lf E IGUAL A %.3lf E SEU END E %p \n", N1,N2,soma,&soma);
	return 0;
}
