#ifndef PRISMATRIANGULAR_H
#define PRISMATRIANGULAR_H
#include "Figura3D.h"

class PrismaTriangular : public Figura3D
{
    public:
        PrismaTriangular( double, double );

        void setLado( double );
        double getLado() const;

        void setAltura( double );
        double getAltura() const;

        virtual void imprimir() const;
        virtual double area() const;
        virtual double volumen() const;



    private:
        double lado;
        double altura;

        double getAreaBase() const;

};

#endif // PRISMATRIANGULAR_H
