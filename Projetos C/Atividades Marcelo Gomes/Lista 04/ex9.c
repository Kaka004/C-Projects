#include <stdio.h>

int main(){
    int acertos = 0;
    char resposta;

    printf("1) Qual linguagem de programacao que e representado como uma cobra?\n");
    printf("a) C#\n");
    printf("b) COBOL\n");
    printf("c) Python\n");
    printf("d) Php\n");
    printf("Digite a resposta correta: ");
    scanf(" %c", &resposta);
    
    if (resposta == 'c') {
        printf("Parabens!! Proxima questao...\n\n");
        acertos++;
    }

    printf("2) Qual dessas linguagens, nao usa a variavel (bool)?\n");
    printf("a) C++\n");
    printf("b) Java\n");
    printf("c) C\n");
    printf("d) Pascal\n");
    printf("Digite a resposta correta: ");
    scanf(" %c", &resposta);
    
    if (resposta == 'c' || resposta == 'd') {
        printf("Parabens!! Proxima questao...\n\n");
        acertos++;
    }

    printf("3)Destas opcoes abaixo, qual NAO e uma linguagem de programacao?\n");
    printf("a) HTML\n");
    printf("b) JavaScript\n");
    printf("c) C\n");
    printf("d) Dart\n");
    printf("Digite a resposta correta: ");
    scanf(" %c", &resposta);
    
    if (resposta == 'a') {
        printf("Parabens!!\n\n");
        acertos++;
    }

    printf("Voce acertou %d de 3 perguntas.\n", acertos);

    return 0;
}
