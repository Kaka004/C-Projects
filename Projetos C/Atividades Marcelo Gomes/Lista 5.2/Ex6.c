#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[100];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    for (int i = 0; nome[i] != '\0'; i++) {
        nome[i] = toupper(nome[i]);
    }

    printf("Nome em maiusculo: %s", nome);

    return 0;
}
