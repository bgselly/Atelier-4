#include <iostream>
#include "Point.h"


Point::Point(float x,float y){
    this->x = x;
    this->y = y;
}

void Point::deplace(float dx,float dy){
    x+=dx;
    y+=dy;
}

void Point::affiche(){
    std::cout<<"Point("<<x<<","<<y<<")"<<std::endl;
}
