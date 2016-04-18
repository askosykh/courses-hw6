#ifndef _FIGURE_H
#define _FIGURE_H

#define PI 3.1416952

#include <iostream>

// base class
class figure {
    protected:
        // dimensions of figure
        double dim_1, dim_2;

    public:
        void set_dim(double, double);
    
    // virtual functions
    virtual double perimeter() = 0;     // perimeter
    virtual double area() = 0;          // area
    virtual void show() = 0;            // show the information
};

class square : public figure {
    public:
        double perimeter();
        double area();
        void show();
};

class circle : public figure {
    public:
        double perimeter();
        double area();
        void show();
};

#endif // _FIGURE_H

