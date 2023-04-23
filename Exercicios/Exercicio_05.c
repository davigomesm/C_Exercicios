//Calcular se um número é ou não primo

#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            primo = 0; 
            break;
        }
    }

    if (primo == 1) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
