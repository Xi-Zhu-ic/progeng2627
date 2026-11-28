//temperature conversion with boolean operators

#include <iostream>

int main(){

    double tin, tout;
    std::string uin,uout;
    std::cin >> tin >> uin;
    if ((uin=="C") || (uin=="c")) {
        tout = (tin * 9/5) +32;
        uout = "F";
    } else if ((uin=="F") || (uin=="f")) {
        tout = (tin - 32) * 5/9;
        uout = "C";
    } else {
        std::cout << "error, unit not recognised" << std::endl;
        return 0;
    }
    std::cout << tout << " " << uout << std::endl;
    return 0;
}
