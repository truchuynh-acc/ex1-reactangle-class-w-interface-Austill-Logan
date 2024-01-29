/**Rectangle.cpp Code
 Programmer: Logan Austill
 Project number: 1
 Project Desc: Rectangle Class Interface
 Course: COSC 2436 PF III Data Structures
 Date:   01/20/2024
 */

#include "Rectangle.h"

/*
 default constructor for Rectangle objects.
 */
Rectangle::Rectangle(){
    length = 1.0;
    width = 1.0;
}

/*
 constructor for Rectangle object.
 */
bool Rectangle::set(double newLength, double newWidth){
    if (newLength && newWidth > 0.0){
        length = newLength;
        width = newWidth;
        return 1;
    }
    else{
        return 0;
    }
}

/*
 getter returns length.
 */
double Rectangle::getLength() const{
    return length;
}

/*
 getter returns width.
 */
double Rectangle::getWidth() const{
    return width;
}

/*
 getter for area
 calculates area then returns solution.
 */
double Rectangle::getArea() const{
    return length * width;
}
