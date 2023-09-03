// Questão 3f
#include <iostream>
#include <string.h>

using namespace std;

int main (void){

  
 char ch1, ch3;

  cout << " Digite um caracter : ";
  cin >>ch1;

  ch3 = (isupper(ch1)? 'a':' ');
  cout << ch3 <<endl;


    return 0;
}