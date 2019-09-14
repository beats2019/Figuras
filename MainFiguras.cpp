#include <iostream>
using namespace std;
#include <vector>
using std::vector;

#include "Figura.h"
#include "Figura2D.h"
#include "Triangulo.h"
#include "Cuadrilatero.h"
#include "Circulo.h"
#include "Poligono.h"
#include "PrismaRectangular.h"
#include "PrismaTriangular.h"
#include "Esfera.h"
#include <typeinfo>

    int main()
    {
         vector < Figura* > figuras( 6 );

        figuras[ 0 ] = new Circulo( 5 );
        figuras[ 1 ] = new Triangulo( 3, 2 );
        figuras[ 2 ] = new Cuadrilatero( 5 , 3 );
        figuras[ 3 ] = new Poligono( 4, 5 );
        figuras[ 4 ] = new PrismaRectangular( 7 , 7 , 7 );
        figuras[ 5 ] = new Esfera( 8 );


        for( size_t i = 0; i < figuras.size() ; i++ )
        {
            cout << "\nAnalizando el objeto de tipo " << typeid( *figuras[ i ] ).name() ;

            Figura2D *figura2D_Ptr =     //Comprobar si es una figura 2D
                dynamic_cast < Figura2D * >
                      ( figuras[ i ] );

            Figura3D *figura3D_Ptr =
                dynamic_cast < Figura3D * >
                      ( figuras[ i ] );


            if( figura2D_Ptr != 0 )
                cout << "\nEl area de la figura 2D es " << figura2D_Ptr->calcularAreaFigura() << endl;
            else
            {
                cout << "\nEL area superficial de la figura 3D es " << figura3D_Ptr->calcularAreaSuperficial()
                << " y el volumen es " << figura3D_Ptr->calcularVolumenFigura() << endl;
            }
        }//fin for


        return 0;
    }
