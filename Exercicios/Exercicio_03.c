//Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %d° numero: ", i+1);
        scanf("%d", &numeros[i]);
        soma += numeros[i]; 
    }

float media = soma / 10.0; 

printf("A media dos numeros lidos e: %.2f", media);

return 0;
}