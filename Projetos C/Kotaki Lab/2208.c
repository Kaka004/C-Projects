#include <stdio.h>

int main() {
	float peso, altura, imc;
	printf("Digite seu peso: ");
	scanf(" %f", &peso);

	printf("Digite sua altura: ");
	scanf(" %f", &altura);

	imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f ", imc);
    
    if(imc < 17){
        printf("Voce esta muito abaixo do peso");
    }
    if(imc >= 17 && imc < 18.50) {
        printf("Voce esta abaixo do peso");
    }
    if(imc >= 18.50 && imc < 25.00){
        printf("Voce esta com seu peso normal");
    }
    if(imc >= 25.00 && imc < 30.00){
        printf("Voce esta acima do peso");
    }
    if(imc >= 30.00 && imc < 35.00){
        printf("Voce esta com o Primeiro Grau da Obesidade");
    }
    if(imc >= 35.00 && imc < 40){
        printf("Voce esta com o Segundo Grau da Obesidade (Severa)");
    }
    if(imc > 40){
        printf("Voce esta com o Terceiro Grau da Obesidade (Morbida)");
    }
    return 0;
}


