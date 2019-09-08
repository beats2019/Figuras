#include "Circulo.h"
#define PI 3.141592
#include <iostream>
using namespace std;

    Circulo::Circulo( double r)
        :radio( r )
    {

    }

    void Circulo::imprimir() const
    {
        Figura2D::imprimir();
        cout << "Circulo de radio "
        << getRadio() << " \t->Area = "
        << area();
    }

    double Circulo::area() const
    {
        return ( getRadio() * getRadio() ) * PI;
    }

     void Circulo::setRadio( double r )
     {
         radio = r;
     }

    double Circulo::getRadio() const
    {
        return radio;
    }
