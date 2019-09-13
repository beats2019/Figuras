#include <iostream>
using namespace std;
#include <vector>
using std::vector;

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
        Circulo miCirculo( 2 );
        Poligono miPoligono( 4 , 6 );
        Triangulo miTriangulo( 4, 2 );
        Cuadrilatero miCuadrilatero( 5 , 5 );

        vector < Figura2D* > figuras( 4 );

        figuras[ 0 ] = &miCirculo;
        figuras[ 1 ] = &miPoligono;
        figuras[ 2 ] = &miTriangulo;
        figuras[ 3 ] = &miCuadrilatero;

        for( size_t i = 0; i < figuras.size() ; i++ )
        {
            Figura2D *derivadaPtr =
                dynamic_cast < Figura2D * >
                    ( figuras[ i ] );

            if( derivadaPtr != 0 )
            {
                cout << "\nEs un objeto tipo 2d !";
            }
        }








        return 0;
    }
