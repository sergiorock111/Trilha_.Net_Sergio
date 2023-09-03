// Questão 3e
#include <iostream>
#include <string.h>

using namespace std;

int main (void){

  
 char ch1, ch3;

  cout << " Digite um caracter : ";
  cin >>ch1;

  ch3 = (isupper(ch1)? 'A':' ');
  cout << ch3 <<endl;


    return 0;
}