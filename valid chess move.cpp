//Valid Chess Moves
#include<iostream>

int main(){
    int a,b,c,d;
    std::cout<<"where is your horse?"<<std::endl;
    std::cin >>a >> b;
    if(a>=8||b>=8){
        std::cout<<"invalid, try again"<<std::endl;
    }  
    while(a<=8 && b<=8){
        std::cout<<"where do you want to go?"<<std::endl; 
        std::cin >>c >> d;
        if(c-a>=3||b-d>=3||c-a<=-3||b-d<=-3){
            std::cout<<"invalid, try again"<<std::endl;
        }  
        else if( (c-a)/(d-b)==2||(c-a)/(d-b)==-2||(c-a)/(d-b)==0.5||(c-a)/(d-b)==-0.5 ){
            a=c;
            b=d;
            std::cout<<"your horse is at:"<<std::endl;
            std::cout<<a<<" "<<b<<std::endl;
        }
        else{
            std::cout<<"game over"<<std::endl;
            break;
        } 
    } 
}

