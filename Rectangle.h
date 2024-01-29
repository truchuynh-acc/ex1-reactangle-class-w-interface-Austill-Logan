/**Rectangle.h Code
 Programmer: Logan Austill
 Project number: 1
 Project Desc: Rectangle Class Interface
 Course: COSC 2436 PF III Data Structures
 Date:   01/20/2024
 */

#ifndef RECTANGLE_
#define RECTANGLE_

#include "RectangleInterface.h"
/*
 Rectangle class definition.
 */
class Rectangle : public RectangleInterface{
    
    /*
     public methods
     default constructor
     length and width setter
     length, width, area getters
     */
public:
    Rectangle();
    bool set(double newLength, double newWidth);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
    
    /*
     private variables
     length and width
     */
private:
    double length;
    double width;
};
#endif
