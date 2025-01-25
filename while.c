#include <stdio.h> // entrada e saida padrao
#define NUMERO_DE_TENTATIVAS 3 //numeros magicos sao numeros importantes para o nosso progama 

int main()
{

    printf("***********************************\n");
    printf("* Bem-vindo ao Jogo de Advinhacao *\n");
    printf("***********************************\n");

    int numerosecreto = 42;
    int chute; // int = numeiro inteiro
    int ganhou = 0;
    int tentativas = 1;

    while (!ganhou) {


    printf("Qual eh o seu chute?", i);
    scanf("%d", &chute);

    if (chute < 0 ) {
        printf("Voce nao pode chutar numeros negativos\n");
        i--; //devolve uma chance pro jogador, 
        continue; //diferente do break, ele pulara para a proxima interação
    }
    
    printf("Seu %do. chute foi %d\n",i, chute);

    int acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;
    int menor = chute < numerosecreto;

    if (acertou) {
        printf("Parabens! Voce acertou!\n");
        break; //break apos acertar 
    } else {
        int  maior = chute > numerosecreto;
        if (maior) {
            printf("Seu chute foi maior do que o numero secreto!\n");
        }
        else {
            printf("Seu chute foi maior do que o numero secreto!\n");
            }
        }
    }

printf("Obrigado por jogar!\n");
}