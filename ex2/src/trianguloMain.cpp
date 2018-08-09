#include <iostream>
#include "calculadorArea.h"

using namespace std;

int main (void){
    Triangulo triangulo(2,3);

    CalculadorArea calculadorArea;

    cout << "CALCULANDO ÁREA DE FORMA GEOMÉTRICA[Trinagulo]" << endl;
    cout << "Triangulo: \t"<< calculadorArea.calculaAreaTriangulo(triangulo) << endl;

    return EXIT_SUCCESS;
}