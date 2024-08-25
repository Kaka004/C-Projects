#include <stdio.h>
int main(){
	int idade, ano, nascimento;
	printf("Entre com a sua idade: ");
	scanf("%d", &idade);
    ano = 2024;
    nascimento = ano - idade;

	printf("Voce nasceu em %d", nascimento);
	return 0;
}

//Precisei declarar mais variaveis, especificar o valor de "ano" e "nascimento" 
//e o código funcionou normalmente