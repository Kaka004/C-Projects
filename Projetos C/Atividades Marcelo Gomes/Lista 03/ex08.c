#include <stdio.h>

int main() {
    int numPessoas = 0;
    float total = 0.0;
    int opcao = 0;
    float valor;
    int maisPessoas;

    while(opcao != 4) {
        printf("\nMenu:\n");
        printf("1. Adicionar mais pessoas\n");
        printf("2. Adicionar mais custos\n");
        printf("3. Dividir a conta\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %d", &opcao);

        switch(opcao) {
            case 1:
                printf("Quantas pessoas deseja adicionar? ");
                scanf(" %d", &maisPessoas);
                numPessoas += maisPessoas;
                printf("Total de pessoas agora: %d\n", numPessoas);
                break;

            case 2:
                printf("Qual o valor do valor a adicionar? ");
                scanf(" %f", &valor);
                total += valor;
                printf("Custo total agora: R$%.2f\n", total);
                break;

            case 3:
                if (numPessoas > 0) {
                    printf("Cada pessoa deve pagar: R$%.2f\n", total / numPessoas);
                } else {
                    printf("Nenhuma pessoa foi adicionada ainda!\n");
                }
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
