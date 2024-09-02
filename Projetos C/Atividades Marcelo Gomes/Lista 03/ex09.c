#include <stdio.h>

int main(){
    float nb1, nb2, total;

    printf("Digite sua nota da nb1: \n");
    scanf(" %f", &nb1);

    printf("Digite sua nota da nb2: \n");
    scanf(" %f", &nb2);

    total = (nb1 + nb2) / 2;

    if(total >= 5){
        printf("Voce esta com nota!");
    } else{
        printf("Voce nao teve nota!");
    }

    return 0;
}