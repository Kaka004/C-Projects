#include <stdio.h>

int main(){
    float pacote1, pacote2;

    printf("Insira o peso (kg) do primeiro pacote: ");
    scanf(" %f", &pacote1);

    printf("Insira o valor (kg) do segundo pacote: ");
    scanf(" %f", &pacote2);

    if(pacote1 > pacote2){
        printf("O primeiro pacote e mais pesado.\n");
    } else if(pacote2 > pacote1){
        printf("O segundo pacote e mais pesado.\n");
    } else{
        printf("Os dois pacotes tem o mesmo peso");
    }

    return 0;
}
