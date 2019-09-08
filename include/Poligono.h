#ifndef POLIGONO_H
#define POLIGONO_H
#include "Figura2D.h"


class Poligono : public Figura2D
{
    public:
        Poligono( double, int );

        virtual void imprimir() const;
        virtual double area() const;

        void setLongitud( double );
        double getLongitud() const;
        void setLados( int );
        double getLados() const;




    private:
        double longitud;
        int lados;

};

#endif // POLIGONO_H
