// incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// definindo as constantes
#define NUMERO_DE_TENTATIVAS 3
#define QTDE_FACIL 20
#define QTDE_MEDIO 15
#define QTD_DIFICIL 6

int main() {
    
    int opcaofim=0;
    do{
	// imprimindo cabecalho bonito do jogo
	printf("\n\n");
	printf("          P  /_\\  P                              \n");
	printf("         /_\\_|_|_/_\\                            \n");
	printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
	printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
	printf("    |\" \"  |  |_|  |\"  \" |                     \n");
	printf("    |_____| ' _ ' |_____|                         \n");
	printf("          \\__|_|__/                              \n");
	printf("\n\n");

	// declarando variaveis que serao usadas mais a frente
	int chute;
	int acertou;
	int nivel;
	int totaldetentativas;
    int lower, upper;
	// definindo a quantidade de pontos inicial
	double pontos = 1000;
	
	printf("Escolha o range do numero secreto (escolha dois numeros)\n");
    scanf("%d %d",&lower,&upper);
    
    while(lower>upper){
        printf("Escolha o range do numero secreto (escolha dois numeros)\n");
        scanf("%d %d",&lower,&upper);
    }
    // gerando um numero secreto aleatorio
    srand(time(NULL));
	int numerosecreto = (rand() % (upper - lower + 1)) + lower;
	
	// escolhendo o nivel de dificuldade
	printf("Qual o nível de dificuldade?\n");
	printf("(1) Fácil (2) Médio (3) Difícil\n\n");
	printf("Escolha: ");

	scanf("%d", &nivel);

	switch(nivel) {
		case 1: 
			totaldetentativas = QTDE_FACIL;
			break;
		case 2:
			totaldetentativas = QTDE_MEDIO;
			break;
		default:
			totaldetentativas = QTD_DIFICIL;
			break;
	}
    
	// loop principal do jogo
	for(int i = 1; i <= totaldetentativas; i++) {

		printf("-> Tentativa %d de %d\n", i, totaldetentativas);

		printf("Chute um número: ");
		scanf("%d", &chute);

		// tratando chute de numero negativo
		if(chute < 0) {
			printf("Você não pode chutar números negativos\n");
			i--;
			continue;
		}

		// verifica se acertou, foi maior ou menor
		acertou = chute == numerosecreto;

		if(acertou) {
			break;
		} else if(chute > numerosecreto) {
			printf("\nSeu chute foi maior do que o número secreto!\n\n");
		} else {
			printf("\nSeu chute foi menor do que o número secreto!\n\n");
		}

		// calcula a quantidade de pontos
		double pontosperdidos = abs(chute - numerosecreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}
    
	// imprimindo mensagem de vitoria ou derrota
	printf("\n");
	if(acertou) {
		printf("             OOOOOOOOOOO               \n");
		printf("         OOOOOOOOOOOOOOOOOOO           \n");
		printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
		printf("    OOOOOO      OOOOO      OOOOOO      \n");
		printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
		printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
		printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
		printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
		printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
		printf("         OOOOOO         OOOOOO         \n");
		printf("             OOOOOOOOOOOO              \n");
		printf("\nParabéns! Você acertou!\n");
		printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
		
		printf("Deseja jogar novamente?\n");
		printf("Digite 1 para sim e 0 para não\n");
		scanf("%d", &opcaofim);
		
	} else {

        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

		printf("\nVocê perdeu! Tente novamente!\n\n");
	}
    }while(opcaofim==1);
    printf("Obrigado");
	return 0;
}