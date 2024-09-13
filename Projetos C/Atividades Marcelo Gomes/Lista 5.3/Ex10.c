#include <stdio.h>

int main(){
    int qtd_alunos;
    
    printf("Informe a quantidade de alunos em sua sala: ");
    scanf(" %d", &qtd_alunos);

    if (qtd_alunos == 0 || qtd_alunos < 0){
        printf("Nao existe esse quantidade!\n");
    }

    int idade[qtd_alunos];

    for(int i = 0; i < qtd_alunos; i++){
        printf("Informe a idade do aluno %d: ", i + 1);
        scanf(" %d", &idade[i]);
    }
    for(int i = 1; i < qtd_alunos; i++){
        int chave = idade[i];
        int j = i - 1;

        while (j >= 0 && idade[j] > chave){
            idade[j + 1] = idade[j];
            j = j - 1;
        }
        idade[j + 1] = chave;
    }
    printf("\nIdades em ordem crescente:\n");
    for(int i = 0; i < qtd_alunos; i++){
        printf(" %d", idade[i]);
    }
    printf("\n");

    return 0;
}