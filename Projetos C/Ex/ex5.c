#include <stdio.h>

int main(){
    float nb1, nb2, media;
    printf("Digite sua nota do primeiro bimestre: ");
    scanf(" %f", &nb1);

    printf("Digite sua nota do segundo bimestre: ");
    scanf(" %f", &nb2);

    media = (nb1 + nb2) / 2;

    printf("A sua media final e: %f", media);
    return 0;
}