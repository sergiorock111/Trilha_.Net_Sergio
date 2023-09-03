#include <iostream>
#include <stdio.h> 
using namespace std;

int main(void) {
    double a,b,c,d;


    cout<< "Primeiro ponto flutuante " << endl;
     cin >> a;
    cout<< "Segundo ponto flutuante:" << endl;
     cin >> b;

          c= (a>b) ? a:b;
          d= (a<b) ? a:b;

        cout <<"o maior numero é : "<< c << endl;
        cout <<"o menor numero é : "<< d << endl;
return 0;
}