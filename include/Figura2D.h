#ifndef FIGURA2D_H
#define FIGURA2D_H
#include "Figura.h"

class Figura2D : public Figura
{
    public:

        virtual double calcularAreaFigura() const = 0;
        virtual void imprimirInformacion() const = 0;

        double getAreaFigura() const;
        void setAreaFigura( double  );

    private:
        double areaFigura;


};

#endif // FIGURA2D_H
