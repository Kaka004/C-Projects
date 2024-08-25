#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int computador, usuario, soma;
    char escolha;

    srand(time(NULL));
    computador = rand() % 10 + 1;

    printf("Digite um numero (0 a 10): ");
    scanf("%d", &usuario);

    if(usuario < 0 || usuario > 10){
        printf("Numero invalido!\n");
        return 1;
    }

    printf("Voce escolheu par ou impar? (p/i): ");
    scanf(" %c", &escolha);

    soma = computador + usuario;

    printf("Voce escolheu %d\nO computador escolheu %d\n", usuario, computador);
    printf("A soma dos numeros foi %d\n", soma);

    if ((soma % 2 == 0 && escolha == 'p') || (soma % 2 != 0 && escolha == 'i')) {
        printf("Parabens! Voce ganhou\n");
    } else {
        printf("Nao deu desta vez... O computador venceu\n");
    }

    return 0;
}
