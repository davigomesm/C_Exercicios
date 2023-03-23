#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número entre 12 e 20: ");
        scanf("%d", &numero);

        if(numero < 12 || numero > 20) {
            printf("Entrada inválida!\n");
        }
    } while(numero < 12 || numero > 20);

    printf("Você digitou o número %d.\n", numero);

    return 0;
}