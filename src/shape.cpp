#include "shape.hpp"

Shape::Shape(std::string s_name, std::string s_color)
{
    name = s_name;
    color = s_color;
}

void Shape::get_name() const
{
    std::cout << "\nName of shape is: " << name << std::endl;
}

void Shape::get_color() const
{
    std::cout << "Color of shape is: " << color << std::endl;
}
