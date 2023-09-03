#include <iostream>
#include <stdio.h> 
using namespace std;

int main(void) {
    int i1, i2, m;

    cout << "Digite o primeiro número: ";
    cin >> i1;

    cout << "Digite o segundo número: ";
    cin >> i2;

    
    m = (i1 > i2) ? i1: i2;

    
    cout << "O maior número é: " << m << endl;

    
    string parImpar = (m % 2 == 0) ? "par" : "ímpar";
    cout << "Ele é um numero: " << parImpar << endl;

    
    if (i1 == i2) {
        cout << "Estes números são iguais." << endl;
    }

    return 0;
}