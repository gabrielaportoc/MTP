#include <stdio.h>
void p (int n1, int n2)

{

	printf("\n QUOCIENTE DA DIVISAO: %d \n", n1/n2);

	printf("\n RESTO DA DIVISAO: %d \n", n1%n2);

}

int main ()

{

	int num1,num2;

	printf("\n DIGITE O PRIMEIRO NUMERO \n");

	scanf("%d",&num1); getchar();

	printf("\n DIGITE O SEGUNDO NUMERO \n");

	scanf("%d",&num2); getchar();

	p(num1,num2);	

	return 0;

} 
