#include <stdio.h>
 
 int main ()
 
 {
    int x, f= 1, i;
 	printf( "\nDigite um numero inteiro: \n\n");
 	scanf("%d", &x);
 	for (i=x ; i > 0; i--)
 	{
 		f = f*i;
 	}
 	printf("%d",f);
 	return 0;
 }
		 	
 
