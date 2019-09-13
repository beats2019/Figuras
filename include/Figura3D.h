#ifndef FIGURA3D_H
#define FIGURA3D_H



class Figura3D
{
    public:
        Figura3D();

        virtual double area() = 0;
        virtual double volumen() = 0;
        virtual void imprimir() = 0;




    private:

};

#endif // FIGURA3D_H
