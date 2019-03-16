#include "circle.hpp"

Circle::Circle(std::string c_name, std::string c_color, double c_radius)
 : Shape(c_name, c_color)
{
    radius = c_radius;
}

void Circle::get_area()
{
    double area = 3.14 * radius * radius;
    std::cout << "Area of circle is: " << area << std::endl;
}
