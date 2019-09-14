#include "Figura3D.h"
#include <iostream>
using namespace std;


        double Figura3D::getAreaSuperficial() const
        {
            return areaSuperficial;
        }

        void Figura3D::setAreaSuperficial( double areaIntroducida )
        {
            areaSuperficial = areaIntroducida;
        }

        double Figura3D::getVolumenSolido() const
        {
            return volumenFigura;
        }

        void Figura3D::setVolumenSolido( double volumenIntroducido )
        {
            volumenFigura = volumenIntroducido;
        }


