#include <stdio.h>

int main(){
    char nome1, nome2, nome3, nome4, nome5;
    printf("Digite o primeiro nome: ");
    scanf("%s", &nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", &nome2);

    printf("Digite o terceiro nome: ");
    scanf("%s", &nome3);

    printf("Digite o quarto nome: ");
    scanf("%s", &nome4);

    printf("Digite o último nome: ");
    scanf("%s", &nome5);

    printf("Aqui está os nomes Digitados: \n %s\n %s \n %s \n %s \n %s", nome1, nome2, nome3, nome4, nome5);

    return 0;
}