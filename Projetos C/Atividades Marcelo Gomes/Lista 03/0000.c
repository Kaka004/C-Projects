#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int computador, usuario, escolha ,decisao;

   srand(time(NULL));
   computador = rand() % 10 + 1;

   printf("Digite um numero (0 a 10): ");
   scanf(" %d", &usuario);

   if(usuario < 0 || usuario > 10){
    printf("Numero invalido!");
    return 1;
   }

    if(usuario % 2 == 0){
        printf("Voce escolheu par, certo? ");
        scanf(" %d", &escolha);
    } else if(usuario % 2 != 0){
        printf("Voce escolheu impar, certo? ");
        scanf(" %d", &escolha);
    }
    if(usuario == "s"){
        decisao = computador + usuario;
        printf("Voce escolheu %d (%d)\n O computador escolheu %d(%d)\n", usuario, escolha, computador, escolha);
    } if(decisao % 2 == 0 || usuario == "par"){
        printf("Parabens! Voce ganhou");
    } else{
        printf("Nao deu desta vez...O computador venceu");
    }

    return 0;
}
