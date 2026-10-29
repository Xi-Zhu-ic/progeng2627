//Exercise: occurrences and indices
#include<iostream>
#include<vector>

int main(){
    int a,i,j;
    bool re=false;
    std::vector<int> v;
    for(i=0;i<=10;i++){
        std::cout << "please input a number:";
        std::cin >> a;
        v.push_back(a);
        for (j=0; j<=i-1;j++){
            if(v[i]==v[j]){
                re=true;
                break;
            }
        }
        if(re==true){
            break;
        }
    }
    if(re==true){
        std::cout<<"the occurence of "<<v[i]<<"is 2, the indice is:"<<std::endl;
        std::cout<<j<<std::endl<<i;
    }
    return 0;   
}