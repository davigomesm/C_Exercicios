//Diferenciar dentre 3 números, qual é o maior e qual é o menor

#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

// Verificando o maior número

    if(num1 > num2 && num1 > num3){
        printf("\nO maior número é: %d", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("\nO maior número é: %d", num2);
    }
    else{
        printf("\nO maior número é: %d", num3);
    }

// Verificando o menor número

    if(num1 < num2 && num1 < num3){
        printf("\nO menor número é: %d", num1);
    }
    else if(num2 < num1 && num2 < num3){
        printf("\nO menor número é: %d", num2);
    }
    else{
        printf("\nO menor número é: %d", num3);
    }
return 0;
}