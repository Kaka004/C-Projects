#include <stdio.h>

int main(){
    int pokemon1, pokemon2, forca;
    printf("Digite o poder do primeiro Pokemon: ");
    scanf(" %d", &pokemon1);

    printf("Digite o poder do segundo Pokemon: ");
    scanf(" %d", &pokemon2);

    forca = pokemon1 + pokemon2;

    printf("A forma do novo pokemon e: %d", forca);

    return 0;
}