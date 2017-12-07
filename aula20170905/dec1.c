#include <stdio.h>

int main ()
{
    int numero, resto;
    printf ("Digite o numero desejado.\n");
    scanf ("%d", &numero);
    resto = numero%2;
    if (resto==1)
        printf("impar.\n");
    else if (resto==0)
        printf("par.\n");
    resto = numero%3;
    if (resto==0)
        printf("mult.3\n");
    resto = numero%5;
    if (resto==0)
        printf("mult.5\n");
    resto = numero%7;
    if (resto==0)
        printf("mult.7\n");
        return 0;
}
