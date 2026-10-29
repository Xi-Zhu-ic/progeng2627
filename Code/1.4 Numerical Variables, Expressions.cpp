//Rectangles

#include <iostream>

int main() {
    int a, b;
    std::cout << "Lenth: ";
    std::cin >> a;
    std::cout << "Width: ";
    std::cin >> b;

    int area = a * b;
    int perimeter = 2 * (a + b);

    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;
    
    return 0;
}

// Currency exchange
#include <iostream>

int main(){

    double GBP;
    std::cout << "How much GBP do you have?: ";
    std::cin >> GBP;

    double ERO = GBP * 1.18;
    std::cout << "The amount of ERO calculated is: " << ERO << std::endl;
    return 0;
}