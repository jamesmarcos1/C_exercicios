#include <stdio.h>
#include <locale.h>

    int main() {
        setlocale(LC_ALL, "Portuguese");

        int ano;
        // ano que a pessoa quer saber //
        printf("Digite o Ano que voce quer saber: ");
        scanf("%d", &ano);

        // imprimir caso ela coloque fora do tempo permitido que e 1800 a 2022 //
        if(ano < 1800 || ano > 2022) {
            printf("Ano inserido fora dos anos permitidos");
            return 1;

        }

        int temolimpiadas = 0;
        int temcopadomundo = 0;

        // verificação jogos Olimpicos //
        if((ano >= 1896 && ano <=2020) && (ano % 4 == 0)) {
            temolimpiadas = 1;
        }

        // verificação Copa do Mundo //
         if ((ano >= 1930 && ano <= 2022) && (ano % 4 == 2)) {
            temcopadomundo = 1;
         }

        //Printar resultados //

        if (temolimpiadas && temcopadomundo) {
            printf("Os jogos Olimpicos de Verao e Copa do Mundo ocorreran no ano de %d.", ano);
        } else if (temolimpiadas) {
            printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.", ano);
        } else if (temcopadomundo) {
            printf("A Copa do Mundo de Futebol ocorreu no de %d.", ano);
        } else {
            printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", ano);
        }


    return 0;
    }