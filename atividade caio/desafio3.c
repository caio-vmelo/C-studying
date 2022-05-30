//Escreva um programa que peça um inteiro ao usuário, e com esse
//inteiro, ele imprima, linha a linha, a tabuada daquele número até o 10.
//Por exemplo, se ele escolher o número 2, o programa imprimirá: 2x1=2,
//2x2=4, 2x3=6, ..., 2x10=20.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    
    printf("digite um numero inteiro\n");
    scanf("%d", &numero);
    
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", numero, i, numero*i);
    }
    return 0;
}