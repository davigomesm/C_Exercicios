//Faça um programa que, para um número indeterminado de pessoas: leia a idade de cada uma,
//sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir calcule:
//a) O número de pessoas;
//b) A idade média do grupo;
//c) Menor idade e a maior idade.

#include <stdio.h>

int main() {
    int idade, num_pessoas = 0, soma_idades = 0, menor_idade, maior_idade;

    printf("Digite as idades das pessoas (0 para terminar):\n");

    scanf("%d", &idade);
    if (idade != 0) {
        num_pessoas++;
        soma_idades += idade;
        menor_idade = idade;
        maior_idade = idade;
    }

    while (idade != 0) {
        scanf("%d", &idade);
        if (idade != 0) {
            num_pessoas++;
            soma_idades += idade;
            if (idade < menor_idade) {
                menor_idade = idade;
            }
            if (idade > maior_idade) {
                maior_idade = idade;
            }
        }
    }

    float idade_media;
    if (num_pessoas > 0) {
        idade_media = (float) soma_idades / num_pessoas;
    } else {
        idade_media = 0;
    }

    printf("Número de pessoas: %d\n", num_pessoas);
    printf("Idade média: %.2f\n", idade_media);
    printf("Menor idade: %d\n", menor_idade);
    printf("Maior idade: %d\n", maior_idade);

    return 0;
}
