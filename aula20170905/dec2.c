#include <stdio.h>
#include <time.h>
 int main ()
 
 {
 	int x,y, soma;
 	printf("\nDigite um numero inteiro nao negativo ");
    scanf("%d", &x);
    srand(time(0));
    int y = rand() %10;
    soma = x + y;
    if (soma%2 == 0)
    	printf("Par");
    else 
    	printf("Impar");
    print ("%d,%d," x,y);
    return 0;
    
}
    
    
