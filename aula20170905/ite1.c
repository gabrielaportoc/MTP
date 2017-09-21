#include <stdio.h>
 
 int main ()
 
 {
    int x, f= 1, i;
 	printf( "digite um numero inteiro: \n\n");
 	scanf("%d", &x);
 	for (i=x ; i > 0; i--)
 	{
 		f = f*i;
 	}
 	printf("O fatorial do numero digitado e: %d",f);
 	return 0;
 }
		 	
 
