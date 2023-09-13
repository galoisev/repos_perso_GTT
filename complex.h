//#include "point.h"

#include <iostream>

typedef double dble;

class Complex{
    public:
        dble x,y;
        Complex(/**/):x(0),y(0){}
        Complex(dble xx, dble yy):x(xx),y(yy){};
        Complex(const Complex& z) = default; //copy constructeur
        Complex& operator=(const Complex& z) = default; //copy by assignment

        void displaying();
};

void Complex::displaying(){
    std::cout << "\n";
    std::cout << "\tz = " << x << " + j" << y << std::endl;
    std::cout << "\tRe(z) = " << x << "\n";
    std::cout << "\tIm(z) = " << y << "\n";
}




