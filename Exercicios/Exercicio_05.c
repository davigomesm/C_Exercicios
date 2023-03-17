//Calcular se um número é ou não primo

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ehPrimo(int numero){
    int i;

    // Verifica se é um número par, exceto o número 2
    if (numero % 2 == 0 && numero != 2) {
        return false;
    }

    // Verifica se é divisível por algum número ímpar maior que 1
    for(i = 3; i <= sqrt(numero); i += 2){
        if (numero%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)){
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}