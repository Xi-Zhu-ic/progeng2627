#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size(); i++){
        vout.push_back(vin1[i]);     
    }
    for(int j=0; j<vin2.size(); j++){
        bool flag=true;
        for(int h=0; h<vin1.size(); h++){
            if(vin1[h]==vin2[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            vout.push_back(vin2[j]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin2.size(); i++){
        for(int j=0; j<vin1.size(); j++){
            if (vin2[i]==vin1[j])
            {
                vout.push_back(vin2[i]);
            }
            
        }     
    }
}

int main(){
    std::string inputfilename1;
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename1;

    std::ifstream infile1; 
    infile1.open(inputfilename1);
    std::vector<std::string> vin1;
    std::string tmp1;
    while(infile1 >> tmp1){
        vin1.push_back(tmp1); 
    }

    std::string inputfilename2;
    std::cout << "enter name of another input file" << std::endl;

    std::cin >> inputfilename2;

    std::ifstream infile2; 
    infile2.open(inputfilename2);
    std::vector<std::string> vin2;
    std::string tmp2;
    while(infile2 >> tmp2){
        vin2.push_back(tmp2); 
    }
    std::vector<std::string> vout;

    union_vector(vin1,vin2,vout);
/*
    std::cout << "Vector1";
    for (int i = 0; i < vin1.size(); i++){
        std::cout << vin1[i];
    }
        std::cout << "Vector2";
    for (int i = 0; i < vin2.size(); i++){
        std::cout << vin2[i];
    }    std::cout << "Vector out";
    for (int i = 0; i < vout.size(); i++){
        std::cout << vout[i];
    }
*/

    std::ofstream outfile;


    outfile.open("tmp/output.txt");


    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::cout<<"new list are:"<<std::endl;
    for(int i=0; i<vout.size(); i++){
        std::cout<<vout[i]<<std::endl;
    }
    outfile.close();
}
