# include <iostream>
#include <cmath>
#include <iomanip>  
using namespace std;

 int main ( void) {
    
        float a,b;
        float soma,divisao, multiplicacao, subtracao, aproximacao;

        cout << " Abaixo será realizado algumas operações matemáticas, com dois números digitados pelo usuário."<< endl ;
        cout << "Digite um numero : " ;
        cin >> a;
        cout << "Digite um numero : ";
        cin >> b;

         soma = a+b;
         subtracao = a- b;
         multiplicacao = a*b;
         divisao = a/b;
         aproximacao = round(divisao*10)/10;

          cout <<fixed <<setprecision(1);
      
        cout << " Soma é igual a : " << soma << endl;
        cout << " Subtração é igual a : " << subtracao << endl;
        cout << " Multiplicaçao é igual a : "<< multiplicacao <<endl; 
        cout << " Divisão é igual a : " << divisao << endl;


         return 0;
 }