#include <stdio.h>

float adicao(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
   return a - b;
}

float multiplicacao(float a, float b){
   return a * b;
}
float divisao(float a, float b){
    if(b != 0){
        return a / b;
    } else{
        printf("Divisao por zero!\n");
        return 0;
    }
}

int main(void){
    float num1, num2, resultado;
    int escolha;
    char continuar;

    do{
    printf("\n--- CALCULADORA ---\n");
    printf("Escolha a operacao:\n");
    printf("1- Adicao\n");
    printf("2- Subtracao\n");
    printf("3- Multiplicacao\n");
    printf("4- Divisao\n");
    printf("0- Sair\n");
    scanf(" %d", &escolha);

    switch (escolha){
        case  1:
        printf("---ADICAO---\n");
        printf("Digite o primeiro numero: ");
        scanf(" %f", &num1);
        printf("Digite o segundo numero: ");
        scanf(" %f", &num2);

        resultado = adicao(num1, num2);
        printf("Resulado: %.2f\n", resultado);
        break;

        case 2:
        printf("---SUBTRACAO---\n");
        printf("Digite o primeiro numero: ");
        scanf(" %f", &num1);
        printf("Digite o segundo numero: ");
        scanf(" %f", &num2);

        resultado = subtracao(num1, num2);
        printf("Resulado: %.2f\n", resultado);
        break;

        case 3:
        printf("---MULTIPLICACAO---\n");
        printf("Digite o primeiro numero: ");
        scanf(" %f", &num1);
        printf("Digite o segundo numero: ");
        scanf(" %f", &num2);

        resultado = multiplicacao(num1, num2);
        printf("Resulado: %.2f\n", resultado);
        break;

        case 4:
        printf("---DIVISAO---\n");
        printf("Digite o primeiro numero: ");
        scanf(" %f", &num1);
        printf("Digite o segundo numero: ");
        scanf(" %f", &num2);

        resultado = divisao(num1, num2);
        printf("Resultado: %.2f\n", resultado);
        break;

        case 0:
        printf("Saindo...\n");
        break;

        default:
        printf("Opcao invalida...\n");
        break;
        }
        
        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar);

    } while(continuar == 's' || continuar == 'S');

    printf("Tchau...\n");

    return 0;
}