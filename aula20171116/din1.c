#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int media(int n, float *numero)
{
	int i,t=0;
	float m =0;
	for(i=0;i<n;i++)
	{
		t = t + numero[i];
	}
	m = t/n;
	printf("\nA media e igual a %f\n", m);
	return m;
}
int desvio(int m,float *numero, int n)
{
	int i;
	float d=0;
	for(i=0;i<n;i++)
	{
		d = d + pow((numero[i] - m),2);
	}
	d = sqrt(d/(n-1));
	printf("\nO desvio padrao e %f\n", d);
	return d;
}
int main ()
{
	float * numeros;
    int i,n,x;
    float v=0;
    printf("\nDigite quantos numeros voce deseja: ");
    scanf("%d", &n);
    numeros = (float*)calloc(n,sizeof(float));
    printf("\nDigite os numeros que voce deseja: ");
    for (i=0;i<n;i++)
    {
    		scanf("%f", &numeros[i]);
    }
    v = media(n,numeros);
    desvio(v,numeros,n);
    
    return 0;
}

