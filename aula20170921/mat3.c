#include <stdio.h>
#include <math.h>

int main ()
{
	double r, b, n;
	printf("\n DIFITE UM NUMERO PARA O CALCUO DO LOG \n\n");
	scanf("%lf", &n); getchar();
	printf("\n DIGITE UM VALOR PARA A BASE DO LOG \n");
	printf("\n A BASE DEVE SER DIFERENTE DE '0'\n\n");
	scanf("%lf", &b); getchar();
	r = (log(n)/log(b));
	printf("\n%.3lf \n", r);
	return 0;
}
