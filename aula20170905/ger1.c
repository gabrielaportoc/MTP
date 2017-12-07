#include <stdio.h>
 
 int main ()
 
 {
 	int n,i,d,teste;
 	printf("Digite um numero: \n");
 	scanf("%d", &i);
    teste = 0;
	for ( d = 2; d <= (i)/2; d++)
		{ 
			
		if ( i%d == 0 )
			{
				teste = 1;
				
				break;
			}
		}
		if ( teste == 0 && i != 1 )
			{
				printf("Primo \n");
		}
		else 
		   printf("Nao e primo \n");
		return 0;

}
	   
