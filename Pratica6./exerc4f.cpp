#include <iostream>
#include <stdio.h> 
using namespace std;

int main(void) {
    double a,b,c;


    cout<< "Primeiro ponto flutuante " << endl;
     cin >> a;
    cout<< "Segundo ponto flutuante:" << endl;
     cin >> b;

          c= (a>b) ? a:b;

        cout <<"o maior numero é : "<< c << endl;

return 0;
}