//Faça um programa que peça ao usuário um número entre 12 e 20. Se a pessoa digitar um
//número diferente, mostrar a mensagem "entrada inválida" e solicitar o número novamente. Se
//digitar correto mostrar o número digitado

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