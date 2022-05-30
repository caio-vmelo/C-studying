//Escreva um programa que imprima a soma de todos os números de
//1 até 100. Ou seja, ele calculará o resultado de 1 + 2 + 3 + 4 + ... + 100.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0;
    
    for(int i=1; i<=100; i++){
        soma+=i;
    }
    printf("%d\n", soma);
    
    return 0;
}