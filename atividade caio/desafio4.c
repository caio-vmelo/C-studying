#include <stdio.h>

int main()
{
    int a,b;
    int result;
    int operacao;
    
    printf("Digite o 1* numero\n");
    scanf("%d",&a);
    
    printf("Digite o 2* numero\n");
    scanf("%d",&b);
    
    printf("Digite a operação: '1' para Somar, '2'  para Subtrair, '3' para Multiplicar, '4' para Dividir\n");
    scanf(" %d",&operacao);
    
    switch (operacao) {
    case 1:
       result = a + b;
       printf("Resultado da operação = %d\n",result);
       break;
    case 2:
       result = a - b;
       printf("Resultado da operação = %d\n",result);
       break;
    case 3:
       result = a * b;
       printf("Resultado da operação = %d\n",result);
       break;
    case 4:
       result = a / b;
       printf("Resultado da operação = %d\n",result);
       break;
    default:
       printf("Entrada inválida\n");
    }
    return 0;        
}