#include "Esfera.h"
#define PI 3.141592
#include <cmath>
#include <iostream>
using namespace std;

    Esfera::Esfera( double radioIntroducido )
        :radioEsfera( radioIntroducido )
    {
        Figura3D::setAreaSuperficial( calcularAreaSuperficial() );
        Figura3D::setVolumenSolido( calcularVolumenFigura() );
    }

    void Esfera::setRadioEsfera( double radioIntroducido )
    {
        radioEsfera = radioIntroducido;
    }

    double Esfera::getRadioEsfera() const
    {
        return radioEsfera;
    }

    double Esfera::calcularAreaSuperficial() const
    {
        return 4 * PI * pow( getRadioEsfera() , 2 );
    }

    double Esfera::calcularVolumenFigura() const
    {
        return 4 / 3 * PI * pow( getRadioEsfera() , 3 );
    }

    void Esfera::imprimirInformacion() const
    {
        cout << "\nLa esfera tiene un area superficial de "
        << calcularAreaSuperficial() << "  y un volumen de "
        << calcularVolumenFigura() << endl;
    }

