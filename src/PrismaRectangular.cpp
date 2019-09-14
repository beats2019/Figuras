#include "PrismaRectangular.h"

#include <iostream>
using namespace std;


    PrismaRectangular::PrismaRectangular( double lado1Introducido, double lado2Introducido, double alturaIntroducida )
        :lado1( lado1Introducido ), lado2( lado2Introducido ), altura( alturaIntroducida )
    {
        Figura3D::setAreaSuperficial( calcularAreaSuperficial() );
        Figura3D::setVolumenSolido( calcularVolumenFigura() );
    }

    void PrismaRectangular::setLado1( double ladoIntroducido )
    {
        lado1 = ladoIntroducido;
    }

    double PrismaRectangular::getLado1() const
    {
        return lado1;
    }

    void PrismaRectangular::setLado2( double ladoIntroducido )
    {
        lado2 = ladoIntroducido;
    }

    double PrismaRectangular::getLado2() const
    {
        return lado2;
    }
    void PrismaRectangular::setAltura( double alturaIntroducida )
    {
        altura = alturaIntroducida;
    }

    double PrismaRectangular::getAltura() const
    {
        return altura;
    }

    double PrismaRectangular::calcularAreaSuperficial() const
    {
        double A1 = getLado1() * getLado2();
        double A2 = getLado1() * getAltura();
        double A3 = getLado2() * getAltura();
        return 2 * ( A1 + A2 + A3 );
    }

    double PrismaRectangular::calcularVolumenFigura() const
    {
        return getLado1() * getLado2() * getAltura();
    }

    void PrismaRectangular::imprimirInformacion() const
    {
        if( getLado1() == getLado2() and getLado1() == getAltura() )
        {
            cout << "\nEste es un cubo de area  "
            << calcularAreaSuperficial() << " y volumen  "
            << calcularVolumenFigura();
        }
        else
        {
            cout << "\nEste es un prisma rectangular de area  "
            << calcularAreaSuperficial() << " y volumen  "
            << calcularVolumenFigura();
        }
    }

