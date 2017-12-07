#include <stdio.h>


int main ()
{
    double numero, fat, mult=1;
    printf ("Digite o numero para que seja calculado o seu fatorial.\n");
    scanf ("%lf", &numero);
    for(fat=1; fat<=numero; fat++)
        mult = mult*fat;
    printf("%lf\n", mult);
	system ("pause");
    return 0;
}
