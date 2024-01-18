# Rectangle Class with Interface

## Introduction:
Before you start this assignment, be sure to read through Chapter 1 and C++ Interlude 1 of the textbook. In addition, please read Appendix I C++ Documentation Systems on pages 809 and 810.

This reading assignment introduces several topics that may be new to you, including: Using a class template to separate the functionality of a class implementation from the type of data used in the class; inheriting data fields (data members) and methods from a base class; and using an abstract class as a public interface for an abstract data type (ADT).

## Objective:
In this assignment, you are going to implement a relatively simple Rectangle class that is split into a header file and an implementation file. You will also create an abstract base class (interface) that defines the public interface for your class. (see the sample-circle-class-w-interface)

**Note: you will not use a class template for this assignment. You will use an abstract class with inheritance.**

### Details:
- Create a class called Rectangle to represent a rectangle.
- Create associate public interfaces (see the sample-circle-class-w-interface)

### Rectangle Class members:
- Private data fields (member variables or data members) of type double to represent the length and width of the rectangle.
- Public methods (member functions):
    + A default (no argument) constructor that sets initializes the length and width of the rectangle to 1.0..
    + A method called set that allows the client to update the rectangle's length and width. This method will have two parameters that allow the client to provide new values for the length and width. This method has a prerequisite - the new values provided for the length and width must both be larger than 0.0. If they are both larger than zero, the Rectangle object will be updated and the method will return true. Otherwise, the object will not be updated and the method will return false.
    + A constant method called getLength that returns the length of the rectangle.
    + A constant method called getWidth that returns the width of the rectangle.
    + A constant method called getArea that returns the area of the rectangle. The area of a rectangle is the length times the width.

```cplus
/** Your method prototypes should be: */
    Rectangle();
    bool set( double newLength, double newWidth );
    double getLength() const;
    double getWidth() const;
    double getArea() const;
```

**Note: If you have not used inheritance and/or abstract classes before, you may want to implement and test your class before you continue to the next step. You must keep your test code separate from your class code, and you must put class definition in a class header file and the implementations for the class methods in a class implementation file.**

### Rectangle Interface file:
- Create an interface file for your Rectangle class similar to the interface files in Chapter 1 and C++ Interlude 1 in your textbook. Your implementation file may more closely resemble the example Circle class in Blackboard.

**Note: Constructor methods are not included in the abstract class. Include a virtual destructor for the abstract class with an empty implementation (see the examples).I nclude documentation in your interface file similar to the documentation (comments) in the examples in the textbook and in the example Circle class. You must use the comment formatting described in Appendix I of the textbook.**

### Debugging and Testing:

- If you see linker error messages like:
```cplus
     Undefined reference to vtable ...
     undefined reference to 'interface-destructor-method'
```
- you have a problem with the destructor in the interface file. Check again that this destructor matches the destructors in the example programs. Also, you may have to delete the object (.o) files in your project folder before you try to compile and link your changes.
- When you are testing a method that contains an if statement, be sure that you try calling the method with data that will make the condition of the if statement true, and also with data that will make the condition false.

### Requirements:
Your program must be split into 4 files: 
- The driver program
- The class interface
- The class header file (class definition)
- The class implementation file.

The driver program for each programming project should begin with "header comments" containing:
```cplus
/**
Your name
Programming assignment number
A short description of the program
Course
The date
*/

/**
For example:
Programmer: TRUC HUYNH
Project number: 2
Project Desc: Quadratic Expression class
Course: COSC 2436 PF III Data Structures
Date:   01/12/2024
*/
```
**note:**
- Use a standard indentation convention in your code (see examples in textbook).
- Use meaningful variable names.
- **Do not use global variables.**
- **Your class methods should not contain any input or output operations. All input and output should be done in your driver.**

### Submission:
Project will automatically clone to your github account. Please clone to your work space and work on it. Make sure you push regularly to create good habit. Your code will automatically submit to my board when you push. I will grade by due date. 