#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    int sete = 0;

    printf("--- MATRIZ ---\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da coluna [%d][%d]: ", i, j);
            scanf(" %d", &matriz[i][j]);

            if(matriz[i][j] == 7){
                sete++;
            }
        }
    }

    printf("\n --- RESULTADO ---\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nO valor 7 foi digitado %d vezes\n", sete);

    return 0;
}