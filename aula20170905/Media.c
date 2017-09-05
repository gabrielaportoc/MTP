
#include <stdio.h>

int main ()

{
	float A,B,C,D,E,M;
	printf( "digite a nota do aluno 1: \n\n");
	scanf("%f", &A);
	printf( "digite a nota do aluno 2: \n\n");
	scanf("%f", &B);
	printf( "digite a nota do aluno 3: \n\n");
	scanf("%f", &C);
	printf("digite a nota do aluno 4: \n\n");
	scanf("%f", &D);
	printf( "digite a nota do aluno 5: \n\n");
	scanf("%f", &E);
	M = (A*2 + B*2 + C*2 + D*3 + E*5)/14.0;
	
	printf("A media e: %2f \n", M);
	return 0;
}

