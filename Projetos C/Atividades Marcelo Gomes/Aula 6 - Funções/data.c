/*#include <stdio.h>
int main(){
    struct data
{
    int dia;
    int mes;
    int ano;
};
struct data x;

printf("Dia: ");
scanf(" %d", &x.dia);
printf("\nMes: ");
scanf(" %d", &x.mes);
printf("Ano: ");
scanf(" %d", x.ano);

printf("Data %d-%d-%d", x.dia, x.mes, x.ano);
return 0;
}
*/

/*#include <stdio.h>

int main(){
    typedef struct dma{
        int dia;
        int mes;
        int ano;
    } Data; 

    Data x;

    printf("Entre com a data: ");
    scanf("%d-%d-%d", &x.dia, &x.mes, &x.ano);

    printf("Data: %d-%d-%d", x.dia, x.mes, x.ano);
    return 0;
}
*/
/*
#include <stdio.h>

int main(){
    typedef struct pessoa{
        int idade;
        char nome[101];
    } pessoa;

    pessoa alunos[30];

    printf("\nEntre com o nome: ");
    scanf(" %100s", alunos[0].nome);

    printf("Entre com sua idade: ");
    scanf(" %d", &alunos[0].idade);

    printf("%s\t%d", alunos[0].nome, alunos[0].idade);
}
*/