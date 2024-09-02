#include <stdio.h>

int main(){
    float pesoMax, peso = 0.0, peso_volume;
    int numVolume;

    printf("Digite o peso maximo da carga do caminhao (em kg): ");
    scanf(" %f", &pesoMax);

    while(1){
        printf("Digite o peso do volume %d (em kg): ", numVolume + 1);
        scanf(" %f", &peso_volume);

        if(peso + peso_volume > pesoMax){
            printf("Voce colocou muita carga! O volume %d deve ser retirado. \n", numVolume);
            break;
        }

        peso += peso_volume;
        numVolume++;

        printf("Peso atual: %.2f kg\n", peso);
    }
    printf("Carga final: %.2f kg com %d volumes.\n", peso, numVolume);

    return 0;
}
