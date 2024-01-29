/**Driver code
Programmer: Logan Austill
Project number: 1
Project Desc: Rectangle Class Interface
Course: COSC 2436 PF III Data Structures
Date:   01/20/2024
*/

#include <iostream>
#include "Rectangle.h"
using namespace std;

/*
 main driver program for rectangle class.
 */
int main(){
    
    /*
     l = length
     w = width
     */
    double l, w;
    
    /*
     creation of Rectangle object named theRectangle.
     */
    Rectangle theRectangle;
    
    /*
     printing to screen the initial state of the rectangle.
     */
    cout<< "Initial state of the rectangle" << endl;
    cout<< "    length = " << theRectangle.getLength() << endl;
    cout<< "    width = " << theRectangle.getWidth() << endl;
    cout<< "    area = " << theRectangle.getArea() << endl << endl;
    
    /*
     prompting user for length and width inputs.
     */
    cout<< "Please enter length of rectangle: " << endl;
    cin>>l;
    cout<< "Please enter width of rectangle: " << endl;
    cin>>w;
    
    /*
     updating the rectangle with user dimensions.
     */
    theRectangle.set(l, w);
    
    /*
     printing to screen new dimensions and area using get methods.
     */
    cout<< "" << endl;
    cout << "Current state of the Rectangle" << endl;
    cout << "   length = " << theRectangle.getLength() << endl;
    cout << "   width = " << theRectangle.getWidth() << endl;
    cout << "   area    = " << theRectangle.getArea() << endl << endl;
    
    return 0;
    
}
