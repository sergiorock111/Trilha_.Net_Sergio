#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    long int li = __LONG_MAX__;
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
            Não houve problemas porque o valor representável tanto como long int quanto como unsigned int. No entanto,
            se o valor de li fosse negativo, a conversão para unsigned int faria com que ui armazenasse um valor grande.
    */
}