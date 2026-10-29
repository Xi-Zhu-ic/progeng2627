//multiplication table
#include<iostream>

int main(){
    int i;
    int j;
    int n;
    std::cout << "input a number" << std::endl;
    std::cin >> n;
    for (i=1; i<=n; i++){

        for (j=1; j<=n; j++){
            std::cout << i*j << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}
