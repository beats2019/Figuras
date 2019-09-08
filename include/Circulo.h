#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura2D.h"

class Circulo : public Figura2D
{
    public:
        Circulo( double );

        virtual void imprimir() const;
        virtual double area() const;

        double getRadio() const;
        void setRadio( double );



    private:
        double radio;
};

#endif // CIRCULO_H
