#include "Poligono.h"
#include <cmath>
#include <iostream>
using namespace std;
#define PI 3.141592

    Poligono::Poligono( double l, int n )

    {
       setLongitud( l );
       setLados( n );

    }

    double Poligono::area() const
    {
        double apotema = getLongitud() / ( 2 * tan( PI / getLados() ));
        return getLongitud() * getLados() * apotema / 2; // P*A/2
    }

    void Poligono::imprimir() const
    {
        Figura2D::imprimir();
        cout << "Poligono Regular con "
        << getLados() <<" lados. Cada lado mide "
        << getLongitud() << " y su apotema es "
        << getLongitud() / ( 2 * tan( PI / getLados() )) << "\t->Area = "
        << area();
    }



    void Poligono::setLongitud( double l)
    {
        longitud = l;
    }

    double Poligono::getLongitud() const
    {
        return longitud;
    }

    void Poligono::setLados( int l )
    {
        lados = l;
    }

    double Poligono::getLados() const
    {
        return lados;
    }



















