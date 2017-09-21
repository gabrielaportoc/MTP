#include <stdio.h>
 
 int main ()
 
 {
 	int B,P,i,x = 0;
 	printf( "digite um numero interio: \n\n");
 	scanf("%d", &B);
 	printf( "digite outro numero interio: \n\n");
    scanf("%d", &P);
    x = B;
    for (i=P; i > 1; i--)
    {
    	x = x*B;
    }
    printf("%d", x);
    return 0;
}
 	
 
 
