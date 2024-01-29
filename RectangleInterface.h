/** RectangleInterface Code
 Programmer: Logan Austill
 Project number: 1
 Project Desc: Rectangle Class Interface
 Course: COSC 2436 PF III Data Structures
 Date:   01/20/2024
 */

#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_
/*
 interface used to access the Rectangle class functionality
 */
class RectangleInterface{
    
    /*
     public methods
     length and width setter
     length, width and area getters
     class object destructor
     */
public:
    bool set(double newLength, double newWidth);
    virtual double getLength() const = 0;
    virtual double getWidth() const = 0;
    virtual double getArea() const = 0;
    virtual ~RectangleInterface(){
        
    }
};
#endif
