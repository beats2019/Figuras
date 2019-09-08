#include "Triangulo.h"
#include <iostream>
using namespace std;

    Triangulo::Triangulo( double b, double h)

    {
        setBase( b );
        setAltura( h );

    }

    void Triangulo::setAltura( double h)
    {
        altura = h;
    }
    double Triangulo::getAltura() const
    {
        return altura;
    }


    void Triangulo::setBase( double b)
    {
        base = b;
    }

    double Triangulo::getBase() const
    {
        return base;
    }

    double Triangulo::area() const
    {
        return ( getBase() * getAltura() ) / 2;
    }

    void Triangulo::imprimir() const
    {
        Figura2D::imprimir();
        cout << "Triangulo" << "\nCon base = " << getBase()
        <<"\tAltura = " << getAltura()
        <<" \t->Area = " << area();
    }







