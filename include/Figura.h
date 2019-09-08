#ifndef FIGURA_H
#define FIGURA_H

#include <string>
using std::string;

class Figura
{
    public:
        Figura();


        virtual void imprimir() const = 0;
        virtual double area() const = 0;




    private:


};

#endif // FIGURA_H
