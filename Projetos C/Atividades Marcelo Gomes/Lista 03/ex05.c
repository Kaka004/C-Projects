#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int aleatorio, usuario;
    srand(time(NULL));

    aleatorio = (rand() % 5) + 1;

    printf("Adivinhe o numero (entre 1 e 5): ");
    scanf(" %d", &usuario);

    if (usuario == aleatorio) {
        printf("Acertou\n");
    } else {
        printf("Errado! O numero era %d\n", aleatorio);
    }

    return 0;
}
