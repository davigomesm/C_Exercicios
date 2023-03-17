#include <iostream>
using namespace std;
int main() {
    float numero, maior, menor;
    int cont = 1;
    while (cont <= 10) {
       cout << ("Digite um numero real:");
       cin >> numero;
       if (cont == 1) {
           maior = numero;
           menor = maior;
       }
       else if (numero > maior) {
           maior = numero;
       }
       else if (numero < menor) {
           menor = numero;
       }
       cont++;
    }
    cout << "Menor numero: " << menor << "\nMaior numero: " << maior << endl;
}