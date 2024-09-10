#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite algo: ");
    scanf(" %s", string);

    int comprimento = strlen(string);

    printf("Ao contrario e: ");
    for (int i = comprimento - 1; i >= 0; i--) {
        printf(" %c", string[i]);
    }

    printf("\n");

    return 0;
}
