#ifndef FIGURA3D_H
#define FIGURA3D_H
#include "Figura.h"


class Figura3D : public Figura
{
    public:

        virtual double calcularAreaSuperficial() const = 0;
        virtual double calcularVolumenFigura() const = 0;
        virtual void imprimirInformacion() const = 0;

        double getAreaSuperficial() const;
        void setAreaSuperficial( double );
        double getVolumenSolido() const;
        void setVolumenSolido( double );

    private:
        double areaSuperficial;
        double volumenFigura;

};

#endif // FIGURA3D_H
