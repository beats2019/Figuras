#include "Esfera.h"
#define PI 3.141592
#include <cmath>
#include <iostream>
using namespace std;

    Esfera::Esfera( double r )
        :radio( r )
    {
        //ctor
    }

    void Esfera::setRadio( double r )
    {
        radio = r;
    }

    double Esfera::getRadio() const
    {
        return radio;
    }

    double Esfera::area() const
    {
        return 4 * PI * pow( getRadio() , 2 );
    }

    double Esfera::volumen() const
    {
        return 4 / 3 * PI * pow( getRadio() , 3 );
    }

    void Esfera::imprimir() const
    {
        cout << "La esfera tiene un radio de "
        << getRadio() << ", un area de  "
        << area() << " y un volumen de  "
        << volumen() << endl;
    }













