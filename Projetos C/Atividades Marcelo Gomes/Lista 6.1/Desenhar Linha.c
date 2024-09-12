#include <stdio.h>

void Linha(){
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");
}

int main(void){
    int numLinha;

    printf("Quantas voce quer desenhar??\n");
    scanf(" %d", &numLinha);

    for (int i = 0; i < numLinha; i++) {
        Linha();
    }

    return 0;
}