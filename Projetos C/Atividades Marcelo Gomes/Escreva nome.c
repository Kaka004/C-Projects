#include <stdio.h>

int main(){
    char nome[100];
    printf("Escreva seu nome: ");
    scanf("%s", &nome);
    printf("Seja bem vindo, %s", nome);
    return 0;
}