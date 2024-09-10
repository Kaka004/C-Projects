#include <stdio.h>

int main() {
    int valores[10];
    int soma = 0;
    float media;
    int temp;
    float mediana;

    printf("Digite 10 valores:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i]; 
    }

    media = soma / 10.0;
    printf("A media dos valores e: %.2f\n", media);


    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (valores[i] > valores[j]) {
                temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }

    mediana = (valores[4] + valores[5]) / 2.0;
    printf("A mediana dos valores e: %.2f\n", mediana);

    return 0;
}
