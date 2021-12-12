#include "point.h"

Point::Point(float x,float y):_x(x),_y(y){
    fmt::print("Point ctor. x,y = {},{}\n",x,y);
}

// libfmt 