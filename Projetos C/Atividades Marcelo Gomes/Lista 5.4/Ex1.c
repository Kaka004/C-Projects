#include <stdio.h>
int main(void){
    typedef struct Ex1
    {
        char nome[101];
        char telefone[12];
        char email[101];
        int idade;
    } Contato;
    Contato contato;

    printf("\nEntre com o seu nome: ");
    scanf(" %100s", contato.nome);
    printf("\nEntre com o seu telefone: ");
    scanf(" %11s", contato.telefone);
    printf("\nEntre com seu email: ");
    scanf(" %100s", contato.email);
    printf("\nEntre com sua idade: ");
    scanf(" %d", &contato.idade);

    printf("\n\n--- SEUS DADOS ---\n");
    printf("\nNome: %s\n", contato.nome);
    printf("\nTelefone: %s", contato.telefone);
    printf("\nEmail: %s", contato.email);
    printf("\nIdade: %d", contato.idade);
    printf("\n");

    return 0;
}

//1- Precisei acrescentar o int, e colocar o void dentro do parenteses da main;
//2- A string do telefone foi alterado para 12 e o print onde armaezena quantidade foi para %11s
//3- No scanf onde armazena a idade do usuario, precisou trocar para %d para numero inteiro;
//4- Onde vai aparecer a idade inseridade pelo usuario, foi preciso alterar para %d;
//5- Foi colocado o return0 para o codigo terminar sem nenhum problema;