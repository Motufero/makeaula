#include <iostream>
#include "calculadorArea.h"

using namespace std;

int main (void){    
    Retangulo retangulo(4,4);

    CalculadorArea calculadorArea;

    cout << "CALCULANDO ÁREA DE FORMA GEOMÉTRICA[Retangulo]" << endl;
    cout << "Retangulo: \t"<< calculadorArea.calculaAreaRetangulo(retangulo) << endl;

    return EXIT_SUCCESS;
}