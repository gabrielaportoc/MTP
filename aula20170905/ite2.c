#include <stdio.h>
 
 int main ()
 
 {
 	int B,P,i,x = 0;
 	printf( "Digite um numero interio: \n");
 	scanf("%d", &B);
 	printf( "Digite outro numero interio: \n");
    scanf("%d", &P);
    x = B;
    for (i=P; i > 1; i--)
    {
    	x = x*B;
    }
    printf("%d", x);
    return 0;
}
 	
 
 
