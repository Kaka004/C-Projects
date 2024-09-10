#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int comprimento = strlen(palavra);
    int e_palindromo = 1;

    for (int i = 0; i < comprimento; i++) {
        if (palavra[i] != palavra[comprimento - i - 1]) {
            e_palindromo = 0;
            break;
        }
    }

    if (e_palindromo) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra nao e um palindromo.\n");
    }

    return 0;
}
