/*#include <stdio.h>

void numero(int *n){
    *n = *n + 1;
}

int main(void){
    int valor = 5;
    numero(&valor);

    printf("valor: %d", valor);
}
*/

/* #include <stdio.h>

int numero(int n){
    return n + 1;
}

int main(void){
    int valor = 5;

    numero(valor);

    printf("valor: %d", valor);

}
*/

#include <stdio.h>

int numero(int n){
    return n + 1;
}

int main(void){
    int valor = 5;

    valor = numero(valor);
    printf("valor: %d", valor);
}