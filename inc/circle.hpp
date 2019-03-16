#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.hpp"

class Circle : public Shape
{
    private:
        double radius;
    public:
        Circle(std::string c_name, std::string c_color, double c_radius);
        void get_area();
};

#endif
