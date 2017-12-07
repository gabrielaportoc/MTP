#include <stdio.h>

 int main ()
 
 {
 	int x,i,soma = 0;
 	printf("Digite um numero: \n");
 	scanf("%d", &x);
 	for (i=1; i <x; i++)
 	{
 		if (x%i == 0)
 		 soma = soma + i;	 
 	}
 	if (soma == x)
 	{
 		printf("E perfeito\n");
 	}
 	else 
 	    printf("Nao e perfeito\n");
 	    
 	return 0;
 	
   
 }

