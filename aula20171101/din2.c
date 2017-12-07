#include <stdio.h>
#include <stdlib.h>

void preenche(float * elemento) 
{
  scanf("%f", elemento);
}

void imprime(float **matriz, int N, int M) 
{
  int i, j;
  printf("matriz %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
    for(j = 0; j < M; j++)
      printf("%g%c", matriz[i][j], (j == M-1)? '\n':'\t');
}
 void transposta(float **matriz, int N, int M)
{
	int i,j;
	float  matrizt[M][N];
	for (i=0;i<M;i++)
		for (j=0;j<N;j++)
			printf("%g%c", matriz[j][i], (j == M-1)? '\n':'\t');
	
}

int main() 
{
  int i, j;
  int N, M;
  float **matriz;
  printf("Entre com a ordem da matriz, no formato 'NxM': ");
  scanf("%d %d", &N, &M);
  matriz = calloc(N,sizeof(float*));
  for(i = 0; i < N; i++) {
	matriz[i] = calloc(M,sizeof(float));
    for(j = 0; j < M; j++) {
      printf("Elemento (%d,%d): ", i, j);
      preenche(&matriz[i][j]);
    }
  }
  imprime(matriz, N, M);
  transposta(matriz,N,M);
  return 0;
}



