//Faça um programa que peça ao usuário para digitar 10 valores e some-os.

#include <stdio.h>

int main() {
    int valores[10];
    int soma = 0;

    printf("Digite 10 valores:\n");

    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    printf("A soma dos valores é: %d\n", soma);

    return 0;
}