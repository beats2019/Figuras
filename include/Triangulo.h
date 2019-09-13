#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Figura2D.h"


class Triangulo : public Figura2D
{

    public:
        Triangulo( double b, double h );

        virtual double calcularAreaFigura() const;
        virtual void imprimirInformacion() const;

        void setBaseTriangulo( double );
        double getBaseTriangulo() const;

        void setAlturaTriangulo( double );
        double getAlturaTriangulo() const;


    private:
        double baseTriangulo;
        double alturaTriangulo;

};

#endif // TRIANGULO_H
