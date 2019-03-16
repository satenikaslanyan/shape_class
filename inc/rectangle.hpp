#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.hpp"

class Rectangle : public Shape
{
    private:
        double width;
        double hight;
    public:
        Rectangle(std::string r_name, std::string r_color, double r_width, double r_hight);
        void get_area();
};

#endif
