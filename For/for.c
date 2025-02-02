#include <stdio.h> // entrada e saida padrao
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 3 //numeros magicos sao numeros importantes para o nosso progama 

int main()
{

    srand(time(NULL));
    printf("***********************************\n");
    printf("* Bem-vindo ao Jogo de Advinhacao *\n");
    printf("***********************************\n");

    int numerosecreto = (rand() % 100) + 1;
    printf("rand: %d\n", numerosecreto);
    int chute; // int = numeiro inteiro

// variavel i com o numero 1, condição de parada i <= 3, i++
//soma 1 a variavel = 0,1,2 e quando for igual a 3, a condicao sera falsa e o loop parara.

//O primeiro bloco, o de inici
//alização, é executado uma única vez no começo. Em seguida, ele executa o
//segundo bloco, a condição. Se ela for verdadeira, ele dispara o bloco de có
//digo. Por fim, ele executa o terceiro bloco, o incremento. E aí repete, valida a
//condição, executabloco, executaincremento, assimpordiante, atéacondição
//deixar de ser verdadeira
//i ++ começa com 1 e vai somando a cada tentativa nesse cenario.
//O i++ adiciona 1 e o i-- subtrai 1 do valor atual da variável.

    for (int i = 1; i <= 3; i++) {

        printf("Qual eh o seu chute? ");
        scanf("%d", &chute);

        if (chute < 0 ) {
            printf("Voce nao pode chutar numeros negativos\n");
            i--; //devolve uma chance pro jogador, 
            continue; //diferente do break, ele pulara para a proxima interação
        }
        
        printf("Seu %dº chute foi %d\n",i, chute);

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;
        
        if (acertou) {
            printf("Parabens! Voce acertou!\n");
            break; //break apos acertar 
        } else {
            if (maior) {
                printf("Seu chute foi maior do que o numero secreto!\n");
            } else {
                printf("Seu chute foi menor do que o numero secreto!\n");
            }
        }
    }

    printf("Obrigado por jogar!\n");
}