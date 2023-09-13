#include "point.h"
#include "complex.h"

#include <vector>
using namespace std;




int main(){
    typedef Model::Point<double> pts3dd ;
    typedef double dble;

    pts3dd Pts;
    Pts.displaying();

    pts3dd A("A",1.0, 0.0, 0.0), B("B",0.0, 1.0, 0.0);
    A.displaying();
    B.displaying();

    Complex z;
    z.displaying();


    vector<pts3dd>vPts;

    return 0;
}