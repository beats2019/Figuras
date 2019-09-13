#include "Triangulo.h"
#include <iostream>
using namespace std;

    Triangulo::Triangulo( double baseIntroducida, double alturaIntroducida)
        :baseTriangulo( baseIntroducida ), alturaTriangulo(alturaIntroducida )
    {
        Figura2D::setAreaFigura( calcularAreaFigura() );
    }

    double Triangulo::calcularAreaFigura() const
    {
        return getBaseTriangulo() * getAlturaTriangulo() / 2;
    }

    void Triangulo::imprimirInformacion() const
    {
        cout << "Este es un triangulo de area = " << calcularAreaFigura();
    }



    void Triangulo::setAlturaTriangulo( double alturaIntroducida )
    {
        alturaTriangulo = alturaIntroducida;
    }
    double Triangulo::getAlturaTriangulo() const
    {
        return alturaTriangulo;
    }


    void Triangulo::setBaseTriangulo( double baseIntroducida )
    {
        baseTriangulo = baseIntroducida;
    }

    double Triangulo::getBaseTriangulo() const
    {
        return baseTriangulo;
    }
