#include <stdio.h>

int main(){
    struct Ex5
    {
        int dia;
        int mes;
        int ano;
    } x;

    printf("Entre com seu dia: ");
    scanf(" %d", &x.dia);

    printf("Entre com seu mes: ");
    scanf(" %d", &x.mes);

    printf("Entre com seu ano: ");
    scanf(" %d", &x.ano);

    printf("Dadas as informacoes: %d/%d/%d", x.dia, x.mes, x.ano);

    return 0;
    
}