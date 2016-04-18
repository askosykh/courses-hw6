#include "figure.h"

void figure::set_dim(double i = 0, double j = 0) {
    dim_1 = i;
    dim_2 = j;
}

double square::perimeter() {
    return 4 * dim_1;
}

double circle::perimeter() {
    return 2 * PI * dim_1;
}

double square::area() {
    return dim_1 * dim_1;
}

double circle::area() {
    return PI * dim_1 * dim_1;
}

void square::show() {
    std::cout << "Square with the side = " << dim_1 << '\n';
    std::cout << "Perimeter = " << perimeter() << '\n';
    std::cout << "Area = " << area() << '\n';
}

void circle::show() {
    std::cout << "Square with the radius = " << dim_1 << '\n';
    std::cout << "Perimeter = " << perimeter() << '\n';
    std::cout << "Area = " << area() << '\n';
}
