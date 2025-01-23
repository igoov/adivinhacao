#include <stdio.h> // entrada e saida padrao

int main( ) {

printf("************************************\n");
printf("* Bem-vindo ao Jogo de Advinhacao *\n");
printf("************************************\n");

int numerosecreto;
numerosecreto = 42;

int chute; //int = numeiro inteiro

printf ("Qual eh o seu chute? ");
scanf("%d", &chute); //%d armazenar e ler um numero inteiro
printf("Seu chute foi %d \n", chute);

//

if (chute == numerosecreto) {
    printf ("Parabens! Voce acertou!\n");
} else {
    if (chute > numerosecreto) {
        printf("Seu chute foi maior do que o numero secreto!\n");
        }
    if (chute < numerosecreto) {
        printf("Seu chute foi menor do que o numero secreto!\n");
    }
}

}
