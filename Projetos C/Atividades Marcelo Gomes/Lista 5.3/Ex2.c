#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;

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
    
    return 0;

}