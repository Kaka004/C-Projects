#include <stdio.h>

void exibir_tabuleiro(char posicoes[]) {
    printf("\n %c | %c | %c ", posicoes[0], posicoes[1], posicoes[2]);
    printf("\n---|---|---");
    printf("\n %c | %c | %c ", posicoes[3], posicoes[4], posicoes[5]);
    printf("\n---|---|---");
    printf("\n %c | %c | %c \n", posicoes[6], posicoes[7], posicoes[8]);
}

int verificar_vencedor(char posicoes[]) {

    int combinacoes[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };

    for (int i = 0; i < 8; i++) {
        if (posicoes[combinacoes[i][0]] == posicoes[combinacoes[i][1]] &&
            posicoes[combinacoes[i][1]] == posicoes[combinacoes[i][2]]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char posicoes[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int jogada, vencedor = 0;
    char jogador = 'X';

    for (int i = 0; i < 9 && !vencedor; i++) {
        exibir_tabuleiro(posicoes);

        printf("Jogador %c, escolha uma posicao (1-9): ", jogador);
        scanf("%d", &jogada);

        if (jogada < 1 || jogada > 9 || posicoes[jogada - 1] == 'X' || posicoes[jogada - 1] == 'O') {
            printf("Jogada invalida, tente novamente.\n");
            i--;
        } else {

            posicoes[jogada - 1] = jogador;


            if (verificar_vencedor(posicoes)) {
                vencedor = 1;
                exibir_tabuleiro(posicoes);
                printf("Jogador %c venceu!\n", jogador);
                break;
            }

            jogador = (jogador == 'X') ? 'O' : 'X';
        }
    }

    if (!vencedor) {
        exibir_tabuleiro(posicoes);
        printf("O jogo terminou empatado!\n");
    }

    return 0;
}
