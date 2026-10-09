//temperature conversion with boolean operators

#include <iostream>

int main(){

    double a;
    double s=0;
    int n=1;
    while (n<=100) {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> a;
        s=s+a;
        double b=s/n;
        n=n+1;
        std::cout << "The average so far is: " << std::endl;
        std::cout << b << std::endl;
    }
    return 0;
}
