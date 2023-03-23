#include <stdio.h>

int main() {
    int numero_inferior, numero_superior, numero_verificar;

    printf("Digite o número inferior do intervalo: ");
    scanf("%d", &numero_inferior);

    printf("Digite o número superior do intervalo: ");
    scanf("%d", &numero_superior);

    printf("Digite o número que deseja verificar: ");
    scanf("%d", &numero_verificar);

    if(numero_verificar >= numero_inferior && numero_verificar <= numero_superior) {
        printf("O número %d está dentro do intervalo [%d, %d].\n", numero_verificar, numero_inferior, numero_superior);
    } else {
        printf("O número %d não está dentro do intervalo [%d, %d].\n", numero_verificar, numero_inferior, numero_superior);
    }

    return 0;
}