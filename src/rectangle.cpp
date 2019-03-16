#include "rectangle.hpp"

Rectangle::Rectangle(std::string r_name, std::string r_color, double r_width, double r_hight)
 : Shape(r_name, r_color)
{
    width = r_width;
    hight = r_hight;
}

void Rectangle::get_area()
{
    double area = hight * width;
    std::cout << "Area of rectangle is: " << area << std::endl;
}
