//5) Escreva um programa que peça um número inteiro ao usuário e
//imprima o fatorial desse número. Para calcular o fatorial, basta ir
//multiplicando pelos números anteriores até 1. Por exemplo, o fatorial
//de 4 é 4 * 3 * 2 * 1, que é igual a 24.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int fatorial;
    
    printf("digite um numero inteiro\n");
    scanf("%d", &numero);
    
    for (fatorial=1; numero>1; numero--)
    {
      fatorial = fatorial * numero;
    }
    printf("%d", fatorial);
    
    return 0;
}