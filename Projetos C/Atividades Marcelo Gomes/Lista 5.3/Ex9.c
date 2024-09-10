#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    int linha, coluna;
    int diagonal = 0;
    int diagonal2 = 0;
    int somaLinha;
    int quadradoMagico = 1;

    printf("\n ---MATRIZ MAGINA---\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf(" %d", &matriz[i][j]);
        }
    }

    somaLinha = 0;

    for(j = 0; j < 3; j++){
        somaLinha += matriz[0][j];
    }
    
    for(i = 0; i < 3; i++){
        linha = 0;
        coluna = 0;
        for(j = 0; j < 3; j++){
            linha += matriz[i][j];
            coluna += matriz[j][i];
        }
        if(linha != somaLinha || coluna != somaLinha){
            quadradoMagico = 0;
            break;
        }
    }
    if(quadradoMagico){
        for(i = 0; i < 3; i++){
            diagonal += matriz[i][i];
            diagonal2 += matriz[i][2 - i];
        }
        if(diagonal != somaLinha || diagonal2 != somaLinha){
            quadradoMagico = 0;
        }
    }

    if(quadradoMagico){
        printf("A matriz e um quadrado magico.\n");
    } else{
        printf("A matriz nao e um quadrado magico.\n");
    }

    return 0;
}