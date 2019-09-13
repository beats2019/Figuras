#ifndef ESFERA_H
#define ESFERA_H
#include "Figura3D.h"
#include "Figura2D.h"

    class Esfera : public Figura3D
    {
        public:
            Esfera( double );

            void setRadio( double );
            double getRadio() const;

            virtual void imprimir() const;
            virtual double area() const;
            virtual double volumen() const;



        private:
            double radio;
    };

    #endif // ESFERA_H
