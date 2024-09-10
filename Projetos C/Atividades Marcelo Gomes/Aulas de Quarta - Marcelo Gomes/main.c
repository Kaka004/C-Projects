#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    double depositos[10];
    int qtdDepositos = 0;
    int op;
    int x;
    do{
        printf(" *** Menu ***\n");
        printf("0 - Sair\n")    ;
        printf("1 - Depositar\n");
        printf("2 - Ver saldo\n");
        printf("3 - Ver historico de depositos\n");
        printf("Entre com a opcao desejada: \n");
        scanf("%d", &op);
        switch(op){
            case 0:
                printf("Bye..\n");
                break;
            case 1:
                printf(" *** Depositar ***\n");
                printf("Entre com o valor do deposito: \n");
                scanf("%lf", &depositos[qtdDepositos]);
                qtdDepositos++;
                printf("Deposito efetuado com sucesso\n");
                break;
            case 2:
                printf(" *** Saldo ***\n");
                double saldo = 0;
                for(x=0;x<qtdDepositos;x++){
                    saldo+=depositos[x];
                }
                printf("Saldo: %0.2lf\n", saldo);
                break;
            case 3:
                printf(" *** Historico ***\n");
                printf("Historico de deposito\n");
                for(x=0;x<qtdDepositos;x++){
                    printf("%0.2lf\n", depositos[x]);
                }
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    }while(op!=0);
}

