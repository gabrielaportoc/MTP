#include <stdio.h>



void soma (int d1 , int n1 , int d2 , int n2)

{

	printf(" %d / %d \n" , ((d2*n1)+(d1*n2)) , (d1*d2));

}

int main ()

{

	int a,b,c,d;

	printf("\n DIGITE DOIS NUMEROS RACIONAIS \n");

	printf("\n PRIMEIRO NUMERO : \n");

	scanf("%d/%d", &a, &b);

	printf("\n SEGUNDO NUMERO: \n");

	scanf("%d/%d", &c, &d);

	soma(b,a,d,c);

	return 0;

}
