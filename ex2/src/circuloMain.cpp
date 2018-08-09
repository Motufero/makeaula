#include <iostream>
#include "calculadorArea.h"

using namespace std;

int main (void){
    Circulo   circulo(4);

    CalculadorArea calculadorArea;

    cout << "CALCULANDO ÁREA DE FORMA GEOMÉTRICA[Circulo]" << endl;
    cout << "Circulo:   \t"<< calculadorArea.calculaAreaCirculo(circulo)<< endl;

    return EXIT_SUCCESS;
}