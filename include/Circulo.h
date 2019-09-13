#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura2D.h"

class Circulo : public Figura2D
{
    public:
        Circulo( double );

        virtual double calcularAreaFigura() const;
        virtual void imprimirInformacion() const;

        double getRadioCirculo() const;
        void setRadioCirculo( double );

    private:
        double radioCirculo;

};

#endif // CIRCULO_H
