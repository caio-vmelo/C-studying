//dado tres numeros imprimi-los em ordem crescente

#include <stdio.h>

int main()
{
    int TAM=3;
    int numeros[TAM];
    int contador;
    int aux;
    int i;
    
    printf("digite 3 numeros\n");
    
  for (int j=0; j<TAM; j++)
  {
      scanf("%d", &numeros[j]);
  }

  for (contador = 1; contador < TAM; contador++) {
    for (i = 0; i < TAM - 1; i++) {
      if (numeros[i] > numeros[i + 1]) {
        aux = numeros[i];
        numeros[i] = numeros[i + 1];
        numeros[i + 1] = aux;
      }
    }
  }
  printf("\nElementos em ordem crescente:\n");
  for (i = 0; i < TAM; i++) {
  printf("%4d", numeros[i]);
  }
  printf("\n");
  return 0;
  }