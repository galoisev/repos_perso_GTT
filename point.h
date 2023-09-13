#ifndef __POINT__H
#define __POINT__H

/***************************************************************************
 * Name: point.h (class point)
 * Author: BARRET
 * Source: G++
 * Purpose: class Point (2D / 3D)
 * Build: see makefile
 * History: 05092023
 ***************************************************************************/


#include <iostream>
#include <cassert> 
#include <string>


namespace Model {
    


    template<class T>
    class Point{
        public:
            std::string name;
            T x,y,z;

            Point(/**/):name("O"),x(0),y(0),z(0){};//default constructor
            Point(std::string nname, T xx, T yy, T zz):name(nname), x(xx), y(yy), z(zz){};
            Point(const Point<T>& p):name(p.name), x(p.x), y(p.y), z(p.z){};//copy constructor
            Point<T>& operator==(const Point<T>& p);//copy assignment constructor


            void displaying(); 

    };


    template<class T>
    Point<T>& Point<T>::operator==(const Point<T>& p){
        x = p.x;
        y = p.y;
        z = p.z;
        return (*this);
    }

    template<class T>
    void Point<T>::displaying(){
        std::cout << "\t" << name << "(" << x << "," << y << "," << z << ")" << std::endl;
        std::cout << "\n";        
    }



}



#endif /* end __POINT__H */