//Exercise: search a value in a vector
#include<iostream>
#include<vector>



int filter_v(const std::vector<double> vin, double t, std::vector<double>& vout){
    int a;
    for(int i=0;i<=vin.size();i++){
        if (vin[i]==t){
            a=i;
            return a;
            break;
        }
    }
    a=vin.size()+1;
    return a;
}

int main(){
    int c;
    std::vector<double> v1;
    std::vector<double> v2;
    std::cout<<"put 10 num into your vector:"<<std::endl;
    for (int i=0;i<10;i++){
        std::cin>>c;
        v1.push_back(c);
    }
    double n;
    std::cout<<"what do you want to strip:";
    std::cin>>n;
    int b=filter_v(v1, n,v2);
    v1.erase(v1.begin() + b);
    v2=v1;
    std::cout<<"now become:"<<std::endl;
    for (int j=0;j<=v2.size();j++){
        std::cout<<v2[j]<<" ";
    }
} 