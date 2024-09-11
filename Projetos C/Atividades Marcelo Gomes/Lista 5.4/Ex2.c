#include <stdio.h>

int main (void){
   typedef struct Ex2{
        char nome[101];
        int idade;
    } Pessoa;

    Pessoa pessoa[2];
    int maiorIdade = 0;
    char nomeMaiorIdade[101];
    
    for(int i = 0; i < 2; i++){
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf(" %100s", pessoa[i].nome);
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf(" %d", &pessoa[i].idade);

        if (pessoa[i].idade > maiorIdade){
        maiorIdade = pessoa[i].idade;
        snprintf(nomeMaiorIdade, sizeof(nomeMaiorIdade), "%s", pessoa[i].nome);
        }
    }

    printf("\nA pessoa mais velha e %s com %d anos", nomeMaiorIdade, maiorIdade);

    return 0;
}