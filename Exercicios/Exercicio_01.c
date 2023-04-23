//Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.

#include <stdio.h>

int main() {
    int num, menor, maior, i;

    printf("Digite o primeiro número: ");
    scanf("%d", &num);
    menor = num;
    maior = num;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        if (num < menor) {
            menor = num;
        }
        if (num > maior) {
            maior = num;
        }
    }

    printf("O menor número digitado foi %d.\n", menor);
    printf("O maior número digitado foi %d.\n", maior);

    return 0;
}
