#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero1, numero2, resposta, total;
    char jogar;

    srand(time(NULL));

    do {

        numero1 = rand() % 10 + 1;
        numero2 = rand() % 10 + 1;

        total = numero1 + numero2;

        printf("Quanto e %d + %d? ", numero1, numero2);
        scanf("%d", &resposta);

        if (resposta == total) {
            printf("Parabens! Voce acertou.\n");
        } else {
            printf("Resposta errada. O total correto e %d.\n", total);
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogar);  

    } while(jogar == 's' || jogar == 'S');

    printf("Obrigado por jogar!\n");

    return 0;
}