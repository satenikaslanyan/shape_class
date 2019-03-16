#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape
{
    protected:
        std::string name;
        std::string color;
    public:
        Shape(std::string s_name, std::string s_color);
        void get_name() const;
        void get_color() const;
        virtual void get_area()  = 0;
};

#endif


