#ifndef PRISMARECTANGULAR_H
#define PRISMARECTANGULAR_H
#include "Figura3D.h"

class PrismaRectangular : public Figura3D
{

    public:
        PrismaRectangular( double , double , double);

        virtual double calcularAreaSuperficial() const;
        virtual double calcularVolumenFigura() const;
        virtual void imprimirInformacion() const;

        void setLado1( double );
        double getLado1() const;

        void setLado2( double );
        double getLado2() const;

        void setAltura( double );
        double getAltura() const;


    private:
        double lado1;
        double lado2;
        double altura;

};

#endif // PRISMARECTANGULAR_H
