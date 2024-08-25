#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf(" %d", &numero);

    if(numero % 1 == 0){
        printf("%d e par\n", numero);
    } else{
        printf("%d e impar\n", numero);
    }

    return 0;
}