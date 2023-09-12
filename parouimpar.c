#include <stdio.h>
#include <locale.h>

    int main() {
        setlocale(LC_ALL, "Portuguese");
        //Entra o DADO //
        int numero;
        int num;
        int soma = 0;
        printf("Digite um numero e descubra se ele e par ou impar: ");
        scanf("%d", &numero);
        // se ele não colocar numero positivo //
        if(numero < 0 ) {
            printf("numero nao incluso no progama, tente outro numero.");
        }
        // pra descobrir se e par ou não //
        if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
        } else {
        printf("O numero %d e impar.\n", numero);
        }

        // calculo da soma //

        num = numero;
        while (num != 0)
        {
            soma += num % 10; // Pega o último dígito e adiciona à soma //
            num /= 10;
        }

        // saida de Dados //
        printf("A soma dos algarismos de %d eh igual a %d\n", numero, soma);
        
        return 0;
    }