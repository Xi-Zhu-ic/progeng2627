//prime number
#include<iostream>

int main(){
    int i;
    int j=2;
    int n;
    int c=0;
    std::cout << "how many do you want?" << std::endl;
    std::cin >> n;
    while(c < n){
        bool isPrime = true;
        for(i = 2; i <= j - 1; i++){
            if(j % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            std::cout << j << "\t";
            c = c + 1;
        }
        j = j + 1;
    }
    return 0;
}
