#ifndef POLIGONO_H
#define POLIGONO_H
#include "Figura2D.h"

class Poligono : public Figura2D
{

    public:

        Poligono( double, int );

        virtual double calcularAreaFigura() const;
        virtual void imprimirInformacion() const;

        void setLongitudPoligono( double );
        double getLongitudPoligono() const;
        void setLadosPoligono( int );
        double getLadosPoligono() const;

    private:
        double longitudPoligono;
        int ladosPoligono;
};

#endif // POLIGONO_H
