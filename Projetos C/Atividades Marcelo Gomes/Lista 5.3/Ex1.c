#include <stdio.h>
int main(){
    int numeros[5][6];
    int op;
    int x, y;

    for(x = 0; x < 5; x++) {
        for(y = 0; y < 6; y++) {
            numeros[x][y] = 0;
        }
    }

    do {
        printf("\n*** Menu ***");
        printf("\n0 - Sair");
        printf("\n1 - Adicionar numero");
        printf("\n2 - Exibir numeros");
        printf("\nEntre com a opcao desejada: ");
        scanf("%d", &op);
        
        switch(op) {
            case 0: 
                printf("\nBye...\n");
                break;
                
            case 1: 
                printf("\n*** Adicionar numeros ***\n");

                do {
                    printf("\nEntre com o linha (0-4): ");
                    scanf("%d", &y);
                    if((y < 0) || (y >= 5)) {
                        printf("\nNumero invalido");
                    }
                } while((y < 0) || (y >= 5));

                do {
                    printf("\nEntre com a coluna (0-5): ");
                    scanf("%d", &x);
                    if((x < 0) || (x >= 6)) {
                        printf("\nNumero invalido");
                    }
                } while((x < 0) || (x >= 6));

                do {
                    printf("\nEntre com o numero (negativo): ");
                    scanf("%d", &numeros[y][x]);
                    if(numeros[y][x] >= 0) {
                        printf("\nNumero invalido. O numero deve ser negativo.\n");
                    }
                } while(numeros[y][x] >= 0);
                
                printf("Numero negativo adicionado com sucesso!\n");
                break;
                
            case 2: 
                printf("\n*** Numeros ***\n");

                for(x = 0; x < 5; x++) {
                    for(y = 0; y < 6; y++) {
                        printf("\t %d", numeros[x][y]);
                    }
                    printf("\n");
                }
                break;
                
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while(op != 0);

    return 0;
}
