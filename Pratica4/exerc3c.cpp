#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    long int li = 1;
    unsigned int uli = 0xffffffff;



    cout << "A variável li que é long int, inicia em: "  << li << endl; 
    cout << "A variável uli que é unsigned int, inicia em: " << uli << endl; 

    li = uli;
    cout << "o valor da atribuido li = uli que é long int, fica: " << li << endl;

    uli = li;
    cout << "o valor da atribuido  uli = li que é unsigned int, fica: " << uli << endl;

    return 0;

    /*
    Resposta:
            O que acontece é que os valores de uli e li são iguais nas operações, devido ao seus tipos de dados unsigned long int e long int
         ter o mesmo tamanho de 4 bytes. Devido a essa situação não há perda de dados.


    */
}