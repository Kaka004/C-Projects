#include <stdio.h>

int main() {
    float peso, menorPeso = -1;
    char continuar;

    do {
        printf("Digite o peso do pacote (em kg): ");
        scanf(" %f", &peso);

        if (menorPeso == -1 || peso < menorPeso) {
            menorPeso = peso;
        }
        printf("Deseja informar outro pacote? (s/n): ");
        scanf(" %c", &continuar);  
    } while(continuar == 's' || continuar == 'S');

    if (menorPeso != -1) {
        printf("O pacote mais leve pesa: %.2f kg\n", menorPeso);
    } else {
        printf("Nenhum pacote foi informado.\n");
    }

    return 0;
}
