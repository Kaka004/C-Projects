#include <stdio.h>
int main(){
	int numero, dobro;
	printf("Entre com o numero: ");
	scanf(" %d", &numero);
	dobro = numero * 2;
	printf("O dobro de %d e %d", numero, dobro);
	return 0;
}

//Para o código funcionar corretamente, foi preciso trocar a operação + para *