//Perimeter and area
#include <iostream>

void rectangle(double length, double width, double& perimeter, double& area) {
    perimeter = 2 * (length + width);
    area = length * width;
}

int main() {
    double l, w, per, ar;

    std::cout << "Enter length and width: ";
    std::cin >> l >> w;

    rectangle(l, w, per, ar);

    std::cout << "Perimeter = " << per << "\n";
    std::cout << "Area      = " << ar << "\n";

    return 0;
}