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

    double pontos = 1000; //double = guardar números que têm vírgula (ou ponto) decimal mais preciso

    printf("Voce fez %d pontos", pontos);

    while (1) {

    printf("Qual eh o seu chute?", tentativas);
    scanf("%d", &chute);

    double pontosperdidos = (chute - numerosecreto) / 2.0; //garantir que a divisão seja feita como divisão de números reais (com vírgula)
    pontos = pontos - pontosperdidos;

    if (chute < 0 ) {
        printf("Voce nao pode chutar numeros negativos\n"); 
        continue; //diferente do break, ele pulara para a proxima interação
    }
    
    printf("Seu %do. chute foi %d\n",tentativas, chute);

    int acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;
    int menor = chute < numerosecreto;

    if (acertou) {
        printf("Parabens! Voce acertou!\n");
        break; 
    } else {
        int  maior = chute > numerosecreto;
        if (maior) {
            printf("Seu chute foi maior do que o numero secreto!\n");
        }
        else {
            printf("Seu chute foi maior do que o numero secreto!\n");
            }
        }
        tentativas++; //somar as tentavas
    }

printf("Voce fez %.2f pontos\n", pontos); //imprimiraquelenúmero com apenas 2 casas decimais
printf("Obrigado por jogar!\n");
}