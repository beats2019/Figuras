#include "Cuadrilatero.h"

#include <iostream>
using namespace std;

    Cuadrilatero::Cuadrilatero( double a, double b)
        :lado1( a ), lado2( b )
    {
        Figura2D::setAreaFigura( calcularAreaFigura() );
    }

    double Cuadrilatero:: calcularAreaFigura() const
    {
        return getLado1() * getLado2();
    }

    void Cuadrilatero::imprimirInformacion() const
    {
        cout << "Este es un cuadrilatero de area = " << calcularAreaFigura();
    }

    void Cuadrilatero::setLado1( double valIntroducido )
    {
        lado1 = valIntroducido;
    }

    double Cuadrilatero::getLado1() const
    {
        return lado1;
    }

    void Cuadrilatero::setLado2( double valIntroducido)
    {
        lado2 = valIntroducido;
    }

    double Cuadrilatero::getLado2() const
    {
        return lado2;
    }

