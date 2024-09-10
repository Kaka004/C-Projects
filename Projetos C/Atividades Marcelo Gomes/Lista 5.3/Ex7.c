#include <stdio.h>

int main(){
    int matriz[3][3];
    int matriz0[3][3];
    int soma[3][3];
    int i, j;

    printf("--- PRIMEIRA MATRIZ ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n--- SEGUNDA MATRIZ ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Valor da posicao [%d][%d]: ", i, j);
            scanf(" %d", &matriz0[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma[i][j] = matriz[i][j] + matriz0[i][j];
        }
    }

    printf("\n--- PRIMEIRA MATRIZ ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n--- SEGUNDA MATRIZ ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d ", matriz0[i][j]);
        }
        printf("\n");
    }

    printf("\n--- SOMA ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
