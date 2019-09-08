#ifndef CUADRILATERO_H
#define CUADRILATERO_H
#include "Figura2D.h"

class Cuadrilatero : public Figura2D
{
    public:
        Cuadrilatero( double, double );

        virtual void imprimir() const;
        virtual double area() const;

        void setLado1( double );
        double getLado1() const;

        void setLado2( double );
        double getLado2() const;





    private:
        double lado1;
        double lado2;
};

#endif // CUADRILATERO_H
