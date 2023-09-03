#include <iostream>
#include <stdio.h>
#include <cctype>
using namespace std ;

int main(void) {

char ch1,ch2,ch3 ; 

    cout<< "Digite um caracter:" << endl;
     cin >> ch2;


         ch3 = (isdigit(ch2)? '1':' ');

  cout << ch3 <<endl;


    return 0;
}