#include <stdio.h>

int main() {
    float peso, maiorPeso = 0.0;
    int i;

    for(i = 1; i <= 10; i++) {
        printf("Digite o peso do pacote %d (em kg): ", i);
        scanf("%f", &peso);
        
        if (peso > maiorPeso) {
            maiorPeso = peso;
        }
    }
    printf("O pacote mais pesado pesa: %.2f kg\n", maiorPeso);
    return 0;
}
