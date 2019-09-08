#ifndef FIGURA2D_H
#define FIGURA2D_H
#include "Figura.h"

class Figura2D : public Figura
{
    public:
        Figura2D( );

        virtual void imprimir() const = 0;
        virtual double area() const = 0;



    private:

};

#endif // FIGURA2D_H
