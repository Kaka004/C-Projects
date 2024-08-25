#include <stdio.h>

int main (){
    int numero;

    printf("Escolha um numero:\n 1 - um\n 2 - dois\n 3 - tres\n 4 - quatro\n 5 - cinco\n");
    scanf(" %d", &numero);

 switch(numero){
    case 1:
    printf("um");
    break;

    case 2:
    printf("dois");
    break;

    case 3:
    printf("tres");
    break;

    case 4:
    printf("quatro");
    break;

    case 5:
    printf("cinco");
    break;

    default:
    printf("Resposta invalida!");
    break;

 }
    return 0;
}