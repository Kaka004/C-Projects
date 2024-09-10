#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    int maior;

    for(i = 0; i < 3; i++ ){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf(" %d", &matriz[i][j]);
        }
    }
    
    printf("\n Valores da matriz:\n");
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
    maior = matriz[0][0];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("\nO maior valor na matriz e: %d\n", maior);
    return 0;

}