#include "rectangle.hpp"
#include "circle.hpp"

int main()
{
    Shape* p[2];
    p[0] = new Rectangle("Rectangle", "Red", 5, 6);
    p[1] = new Circle("Circle", "Blue", 5);
    for (int i = 0; i < 2; ++i) {
        p[i]->get_name();
        p[i]->get_color();
        p[i]->get_area();
    }
}
