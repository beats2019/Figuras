#include "Circulo.h"
#define PI 3.141592
#include <iostream>
using namespace std;

    Circulo::Circulo( double radioIntroducido )
        :radioCirculo( radioIntroducido )
    {
        Figura2D::setAreaFigura( calcularAreaFigura() );
    }


    double Circulo::calcularAreaFigura() const
    {
        return ( getRadioCirculo() * getRadioCirculo() ) * PI;
    }

    void Circulo::imprimirInformacion() const
    {
        cout << "Este es un circulo de area = " << calcularAreaFigura();
    }

     void Circulo::setRadioCirculo( double radioIntroducido )
     {
         radioCirculo = radioIntroducido;
     }

    double Circulo::getRadioCirculo() const
    {
        return radioCirculo;
    }

