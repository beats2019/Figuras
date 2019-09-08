#include "Cuadrilatero.h"
#include <iostream>
using namespace std;

    Cuadrilatero::Cuadrilatero( double a, double b)
        :lado1( a ), lado2( b )
    {

    }

    void Cuadrilatero::setLado1( double val)
    {
        lado1 = val;
    }

    double Cuadrilatero::getLado1() const
    {
        return lado1;
    }

    void Cuadrilatero::setLado2( double val)
    {
        lado2 = val;
    }

    double Cuadrilatero::getLado2() const
    {
        return lado2;
    }

    double Cuadrilatero:: area() const
    {
        return getLado1() * getLado2();
    }

    void Cuadrilatero::imprimir() const
    {
        Figura2D::imprimir();
        cout << "Cuadrilatero" << "\nDe dimensiones "
        << getLado1() << '*' << getLado2()
        <<" \t->Area = " << area();
    }









