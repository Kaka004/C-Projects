#include <stdio.h>

void modificarValor(int *numero){
    *numero = 16;
}
int main(){
    int valor = 10;
    modificarValor(&valor);
    printf("\nValor: %d", valor);
    return 0;
}