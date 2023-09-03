#include <iostream>
using namespace std;
int main() {
    double x, y;

    
    cout << "Adicione a  coordenada de x: ";
    cin >> x;

    cout << "Adicione a coordenada de y: ";
    cin >> y;

    
       string quadrante = (x > 0 && y > 0) ? "primeiro quadrante"
                        : (x < 0 && y > 0) ? "segundo quadrante"
                        : (x < 0 && y < 0) ? "terceiro quadrante"
                        : (x > 0 && y < 0) ? "quarto quadrante"
                        : "sobre um dos eixos";


    cout << "O ponto (" << x << ", " << y << ") está no " << quadrante << "." << endl;

    return 0;
}
