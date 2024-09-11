#include <stdio.h>

int main (void){
    typedef struct Ex3{
        char nome[101];
        int idade;
    } Contato;

    Contato contato[5];
    int x = 0;

    for(x = 0; x < 5; x++){
        printf("\nDigite o nome do contato %d: ", x);
        scanf(" %100s", contato[x].nome);
        printf("Digite sua idade: ");
        scanf(" %d", &contato[x].idade);
    }
    printf("\n --- Lista de Contatos ---\n");

    for(x = 0; x < 5; x++){
        printf("\nNome: %s\nIdade: %d\n", contato[x].nome, contato[x].idade);
    }

    return 0;
}
