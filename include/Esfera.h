#ifndef ESFERA_H
#define ESFERA_H
#include "Figura3D.h"
#include "Figura2D.h"

    class Esfera : public Figura3D
    {
        public:
            Esfera( double );

            virtual double calcularAreaSuperficial() const;
            virtual double calcularVolumenFigura() const;
            virtual void imprimirInformacion() const;

            void setRadioEsfera( double );
            double getRadioEsfera() const;





        private:
            double radioEsfera;
    };

    #endif // ESFERA_H
