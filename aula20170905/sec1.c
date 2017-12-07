
#include <stdio.h>

int main ()
{
    float lado, area;
    printf ("Digite o valor do lado do quadrado para que sua area seja calculada, em metros\n");
    scanf ("%f", &lado);
    area = lado*lado;
    printf ( "%f", area);
    return 0;
}
