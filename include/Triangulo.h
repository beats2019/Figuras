#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Figura2D.h"


class Triangulo : public Figura2D
{
    public:
        Triangulo( double, double );

        void setBase( double );
        double getBase() const;

        void setAltura( double );
        double getAltura() const;

        virtual void imprimir() const;
        virtual double area() const;





    private:
        double base;
        double altura;
};

#endif // TRIANGULO_H
