//valid triangle
#include <iostream>
#include <cmath>

int main(){
    double a, b, c;

    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;

    if( a+b>c || a+c>b || b+c>a){
        if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
            std::cout << "rt triangle";
        }
        else if (a==b==c){
            std::cout << "same length";
        }
        else if (a*a+b*b==2*c*c||a*a+c*c==2*b*b||b*b+c*c==2*a*a){
            std::cout << "tr same length triangle";
        }
        else{
            std::cout << "triangle";
        }
    }
    else{
        std::cout << "none";
    }
}