//Exercise: search a value in a vector
#include<iostream>
#include<vector>

bool search_vector(int n, const std::vector<int>& vin){
    bool b = false;
    for (int i = 0; i < vin.size(); i++){
        if (n == vin[i]){
            b = true;      
            break;
        }
    }
    return b;
}

int main(){
    std::vector<int> v;
    int a;
    for (int j=0; j<10;j++){
        std::cout << "set num in v:";
        std::cin >> a;
        v.push_back(a);
    }
    std::cout << "enter the num you want:";
    std::cin >>a;
    bool c=false;
    c=search_vector(a,v);
    if (c==true){
        std::cout<<"in the v";
    }
    else{
        std::cout<<"not in the v";
    }
    return 0;   
}