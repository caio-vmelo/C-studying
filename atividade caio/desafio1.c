//Escreva um programa que imprima todos os números pares entre 2 e
//50. Para saber se o número é par, basta você ver se o resto da divisão
//do número por 2 é igual a 0.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1; i<=50; i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
    return 0;
}