//Absolute Value
#include <iostream>

int main(){
    
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n < 0) {
        n = -n;
    }

    std::cout << "The absolute value is: " << n << std::endl;
    return 0;
}