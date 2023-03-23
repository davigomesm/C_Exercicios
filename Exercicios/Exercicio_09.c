//Faça um programa que, para um número indeterminado de pessoas: leia a idade de cada uma,
//sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir calcule:
//a) O número de pessoas;
//b) A idade média do grupo;
//c) Menor idade e a maior idade.

#include <stdio.h>
#include <limits.h>

int main() {
    int idade, soma_idades = 0, numero_pessoas = 0, menor_idade = INT_MAX, maior_idade = INT_MIN;

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade);

    while(idade != 0) {
        soma_idades += idade;
        numero_pessoas++;

        if(idade < menor_idade) {
            menor_idade = idade;
        }

        if(idade > maior_idade) {
            maior_idade = idade;
        }

        printf("Digite a idade da próxima pessoa (ou 0 para encerrar): ");
        scanf("%d", &idade);
    }

    if(numero_pessoas > 0) {
        float media_idades = (float)soma_idades / (float)numero_pessoas;
        printf("O número de pessoas é %d, a idade média do grupo é %.2f, a menor idade é %d e a maior idade é %d.\n", numero_pessoas, media_idades, menor_idade, maior_idade);
    } else {
        printf("Não foi informada nenhuma idade.\n");
    }

    return 0;
}