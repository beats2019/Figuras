#include "PrismaTriangular.h"
#include <iostream>
using namespace std;
#include <cmath>

    PrismaTriangular::PrismaTriangular( double l, double h )
        :lado( l ), altura( h )
    {
        //ctor
    }

    void PrismaTriangular::setAltura( double h)
    {
        altura = h;
    }
    double PrismaTriangular::getAltura() const
    {
        return altura;
    }

    double PrismaTriangular::getAreaBase() const
    {
        return pow( getLado() , 2 ) * sqrt( 3 ) / 2;
    }


    void PrismaTriangular::setLado( double b)
    {
        lado = b;
    }

    double PrismaTriangular::getLado() const
    {
        return lado;
    }


    double PrismaTriangular::area() const
    {

        double Al = getLado() * getAltura();
        return ( 2 * getAreaBase() ) + ( 3 * Al );
    }

    double PrismaTriangular::volumen() const
    {
        return getAreaBase() * getAltura();
    }

    void PrismaTriangular:: imprimir() const
    {
        cout << "\nEste es un prisma triangular con area =  "
        << area() << " y volumen =  " << volumen();
    }





