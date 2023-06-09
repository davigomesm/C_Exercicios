//Leia uma temperatura a qual o usuário irá o Valor e a escala atual: (Fahrenheit, Celsius, Kelvin)
//e informar a escala para qual deseja converter.

#include <stdio.h>

int main() {
    float temperatura;
    char escala_atual, escala_convertida;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite a escala atual (C, F, K): ");
    scanf(" %c", &escala_atual);

    printf("Digite a escala para qual deseja converter (C, F, K): ");
    scanf(" %c", &escala_convertida);

    switch(escala_atual) {
        case 'C':
            if(escala_convertida == 'F') {
                temperatura = temperatura * 1.8 + 32;
            } else if(escala_convertida == 'K') {
                temperatura = temperatura + 273.15;
            }
            break;
        case 'F':
            if(escala_convertida == 'C') {
                temperatura = (temperatura - 32) / 1.8;
            } else if(escala_convertida == 'K') {
                temperatura = (temperatura + 459.67) / 1.8;
            }
            break;
        case 'K':
            if(escala_convertida == 'C') {
                temperatura = temperatura - 273.15;
            } else if(escala_convertida == 'F') {
                temperatura = (temperatura - 273.15) * 1.8 + 32;
            }
            break;
        default:
            printf("Escala inválida!\n");
            return 1;
    }

    printf("Temperatura convertida: %.2f %c\n", temperatura, escala_convertida);

    return 0;
}