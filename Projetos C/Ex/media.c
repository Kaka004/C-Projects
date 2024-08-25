#include <stdio.h>

int main(){
    int np1, np2, pim, media, exame, media_exame;

    printf("Digite sua nota do Primeriro Bimestre: ");
    scanf("%d", &np1);

    printf("Digite sua nota do Segunda Bimestre: ");
    scanf("%d", &np2);

    printf("Digite sua nota do PIM: ");
    scanf("%d", &pim);

    media =(((np1 + np2) * 0.4) + pim * 0.2);

    if(media >= 7){
        printf("Aprovado! Sua nota foi: %d", media);
    } else{
        printf("Reprovado!\nDigite sua nota do Exame: ");
        scanf("%d", &exame);

        media_exame = (media + exame) / 2 ;

        if(media_exame >= 5){
            printf("Aprovado! Sua nota foi: %d", media_exame);
        } else{
            printf("Ficou em DP, infelizmente..");
        }
    }
        return 0;
}