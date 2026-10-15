//Factorial
#include<iostream>

int main(){
    int i;
    int n;
    int s=1;
    std::cout << "input a hi number" << std::endl;
    std::cin >> n;

    for(i=1; i<=n; i++){
        s=s*i;
    }
    std::cout << s;
    return 0;
}
