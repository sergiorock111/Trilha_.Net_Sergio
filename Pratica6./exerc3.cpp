// Questa 3 de a até c..
#include <iostream>
#include <string.h>

using namespace std;

int main (void){

char ch1,ch2,ch3;

  cout << "Digite um caracter:";
  cin >>ch1;
   cout << "Digite o segundo  caracter:";
  cin >>ch2;
  
    ch3 = ch1-1 ;
    cout << " O Antecendente é :" <<ch3 << endl;
    cout << " O Hexadecimal é :" <<hex <<(int)ch3 << endl;
    cout << " O octadecimal é :" << oct <<(int)ch3 <<endl;
    cout << " o numero decimal é : " <<int(ch3) <<endl;
    cout << ch3 << " '__' " <<endl;
   
    return 0;
}