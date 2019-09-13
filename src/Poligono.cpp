#include "Poligono.h"
#include <cmath>
#include <iostream>
using namespace std;
#define PI 3.141592

    Poligono::Poligono( double longitudIntroducida, int numeroLadosIntroducido )
        :longitudPoligono( longitudIntroducida ), ladosPoligono( numeroLadosIntroducido )
    {
       Figura2D::setAreaFigura( calcularAreaFigura() );
    }

    double Poligono::calcularAreaFigura() const
    {
        double apotema = getLongitudPoligono() / ( 2 * tan( PI / getLadosPoligono() ));
        return  getLongitudPoligono() * getLadosPoligono() * apotema / 2; // P*A/2
    }


    void Poligono::imprimirInformacion() const
    {
        cout << "Este es un poligono de area = " << calcularAreaFigura();
    }


    void Poligono::setLongitudPoligono( double longitudIntroducida)
    {
        longitudPoligono = longitudIntroducida;
    }

    double Poligono::getLongitudPoligono() const
    {
        return longitudPoligono;
    }

    void Poligono::setLadosPoligono( int numeroLadosIntroducido )
    {
        ladosPoligono = numeroLadosIntroducido;
    }

    double Poligono::getLadosPoligono() const
    {
        return ladosPoligono;
    }

