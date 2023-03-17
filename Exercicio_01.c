#include <stdio.h>
#include <limits.h>

int main() {
int menor = INT_MAX;
int maior = INT_MIN;
int numero;

for (int i = 0; i < 10; i++) {
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < menor) {
        menor = numero;
    }

    if (numero > maior) {
        maior = numero;
    }
}

printf("O menor número digitado foi: %d\n", menor);
printf("O maior número digitado foi: %d\n", maior);

return 0;
}