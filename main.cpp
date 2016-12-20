#include <string>
#include <fstream>
#include <iostream>
#include "readTrain.hpp"
#include <unistd.h>

int main(int argc, char *argv[]){
    
    
    std::vector<tuple> t = readTrain("/Users/yiboliu/Desktop/Academics/ComputerScience/CS368/Project/train.csv");
    
    chdir("/Users/yiboliu/Desktop/Academics/ComputerScience/CS368/Project/");
    
    system("/usr/local/bin/Rscript House_price.R");
    
}
