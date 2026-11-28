#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen+col;
}

int hori_check(std::string line,
    const std::string& word
){
    bool a=false;
    if(word.size()>line.size()){
        return -1;
    }
    for (int i=0; i<=line.size()-word.size(); i++){
        if(line[i]==word[0]){
            a=true;
            for(int j=0; j<word.size(); j++){
                if(line[i+j]!=word[j]){
                    a=false;
                }
            }
            if(a){
                return i;
            }
        }
    }
    return -1;
}

int verti_check(std::string col,
    const std::string& word
){
    bool b=false;
    if(word.size()>col.size()){
        return -1;
    }
    for (int i=0; i<=col.size()-word.size(); i++){
        if(col[i]==word[0]){
            b=true;
            for(int j=0; j<word.size(); j++){
                if(col[i+j]!=word[j]){
                    b=false;
                }
            }
            if(b){
                return i;
            }
        }
    }
    return -1;
}

std::string genline(const std::vector<std::string>& grid, int a){
    std::string m;
    for (int i=0; i<grid[a].size();i++)
        m.push_back(grid[a][i]);
    return m;
}

std::string gencol(const std::vector<std::string>& grid,int c){
    std::string n;
    for(int i=0; i<grid.size(); i++){
        n.push_back(grid[i][c]);
    }
    return n;
}

void find_words(
    const std::vector<std::string>& grid,
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    solution.clear();
    not_found.clear();
    for(int i=0; i<grid.size(); i++){
        solution.push_back(std::string(grid[i].size(), '#'));
    }

    std::string m;
    std::string n;
    for(int j=0; j<words.size(); j++){
        bool match=false;
        bool matchv=false;

        for(int i=0; i<grid.size(); i++){
            m=genline(grid, i);
            int start=hori_check(m,words[j]);
            if(start!=-1){
                for(int k=0; k<words[j].size(); k++){
                    solution[i][start+k]=words[j][k];
                }
                match=true;
            }
        }

        if(!grid.empty()){
            for(int k=0; k<grid[0].size(); k++){
                n=gencol(grid, k);
                int start=verti_check(n,words[j]);
                if(start!=-1){
                    for(int i=0; i<words[j].size(); i++){
                        solution[start+i][k]=words[j][i];
                    }
                    matchv=true;
                }
            }
        }

        if(!match && !matchv){
            not_found.push_back(words[j]);
        }
    }
}

int main(int argc, char* argv[]) {

    std::vector<std::string> grid;
    std::vector<std::string> words;
    std::ifstream infile(argv[1]);
    std::ifstream infilew(argv[2]);

    if (!infile.is_open()) {
        std::cout << "error, can't open input file" << std::endl;
        return EXIT_FAILURE;
    }
    if (!infilew.is_open()) {
        std::cout << "error, can't open input file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while (std::getline(infile, tmp)) {
        grid.push_back(tmp);
    }
    tmp.clear();
    while (std::getline(infilew, tmp)) {
        words.push_back(tmp);
    }

    std::vector<std::string> solutions;
    std::vector<std::string> not_found;

    find_words(grid, words, solutions, not_found);

    std::cout<<"solution:"<<std::endl;
    for(int i=0; i<solutions.size(); i++){
        std::cout<<solutions[i]<<std::endl;
    }

    std::cout<<"not found:"<<std::endl;
    for(int j=0; j<not_found.size(); j++){
        std::cout<<not_found[j]<<std::endl;
    }

    return 0;
}
