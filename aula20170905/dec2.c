#include <stdio.h>
#include <time.h>
 int main ()
 
 {
 	int x,y, soma;
 	printf("\nDigite um numero inteiro nao negativo ");
    scanf("%d", &x);
    srand(time(0));
    y = rand() %10;
    soma = x + y;
    printf("%d\n", x);
    printf("%d\n", y);
    if (soma%2 == 0)
    	printf("Par\n");
    else 
    {
    
    	printf("Impar\n");
    }
    return 0;
    
}



    
    
