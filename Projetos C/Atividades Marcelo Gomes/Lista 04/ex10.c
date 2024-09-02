#include <stdio.h>

int main() {
    int opcao, pessoas = 0;
    float total = 0.0, custo, dividir;

    do{
        printf("\n----- Kayo's Bar -----\n");
        printf("1) Incluir mais pessoas na mesa\n");
        printf("2) Incluir mais custos\n");
        printf("3) Consultar o custo total\n");
        printf("4) Consultar o valor rateado\n");
        printf("5) Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %d", &opcao);

        switch(opcao) {
            case 1:
                printf("Quantas pessoas deseja adicionar? ");
                int novaPessoa;
                scanf(" %d", &novaPessoa);
                pessoas += novaPessoa;
                printf("Agora ha %d pessoas na mesa.\n", pessoas);
                break;

            case 2:
                printf("Digite o valor do custo a ser adicionado: R$ ");
                scanf(" %f", &custo);
                total += custo;
                printf("Custo adicionado. Custo total agora e R$ %.2f\n", total);
                break;

            case 3:
                printf("O custo total da conta e: R$ %.2f\n", total);
                break;

            case 4:
                if (pessoas > 0) {
                    dividir = (total * 1.10) / pessoas;
                    printf("O valor dividido por pessoa (incluindo 10%% de gorjeta) e: R$ %.2f\n", dividir);
                } else {
                    printf("Nao ha pessoas na mesa para dividir a conta.\n");
                }
                break;

            case 5:
                printf("Tchau...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while(opcao != 5);

    return 0;
}
