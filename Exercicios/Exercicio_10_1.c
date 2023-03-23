//Crie um programa em C que receba três valores (obrigatoriamente maiores que zero), representando
//as medidas dos três lados de um triângulo. Elabore funções para determinar se eles lados formam um triangulo, sabendo que o comprimento de cada lado de um triângulo é menor do que a soma dos //outros dois lados. 

#include <stdio.h>

int formaTriangulo(float a, float b, float c) {
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float a, b, c;

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &a);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &b);

    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &c);

    if (formaTriangulo(a, b, c)) {
        printf("Os valores %.2f, %.2f e %.2f formam um triângulo.\n", a, b, c);
    } else {
        printf("Os valores %.2f, %.2f e %.2f não formam um triângulo.\n", a, b, c);
    }

    return 0;
}