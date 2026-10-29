//Factorial
#include<iostream>

int main(){
    int n,q=1;
    std::cout<<"what is your number ?"<<std::endl;
    std::cin >> n;
    while (q<=n){
        if(n%q==0){
            std::cout<<q<<" ";
        }
        q=q+1;
    }   
}