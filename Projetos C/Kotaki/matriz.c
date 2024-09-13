#include <stdio.h>

int main(void){
    int matriz[3][3];
    int linha, coluna;
    int maior;
    int par = 0;
    int impar = 0;
    char resposta;

    //Laço de repetição para a pessoa querer fazer mais uma vez ou não
    do{
        for(linha = 0; linha < 3; linha++){
            for(coluna = 0; coluna < 3; coluna++){
            printf("Digite o valor da posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            //Ver a quantidade de números pares e impares
            if(matriz[linha][coluna] %2 ==0){
                par++;
            } else{
                impar++;
            }
        }
    }

    printf("Valores da matriz:\n");

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d ", matriz[linha][coluna]);

        //Dentre os numeros da matriz, mostra qual é o maior
            maior = matriz[0][0];
            if(matriz[linha][coluna] > maior){
                maior = matriz[linha][coluna];
            }
        }
        printf("\n");
    }
    printf("\n O maior valor da matriz e %d!\n", maior);
    printf("Temos %d numeros pares, e %d numeros impares\n", par, impar);
    printf("Deseja fazer outra? (s/n)\n");
    scanf(" %c", &resposta);
    } while(resposta == 's' || resposta == 'S');

    printf("Tchau...\n");
    return 0;
}