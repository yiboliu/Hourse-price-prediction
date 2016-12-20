#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "tuple.hpp"

using std::string;

std::vector<tuple> readTrain(const std::string &table){
    std::ifstream readFile(table);
    string schema;
    getline(readFile, schema);
    std::cout << schema;
    string line;
    std::vector<tuple> tuples;
    while(getline(readFile, line)){
        size_t pos = 0;
        string token;
        string delimiter = ",";
        std::vector<std::string> prmts;
        while ((pos = line.find(delimiter)) != string::npos) {
            token = line.substr(0,pos);
            prmts.push_back(token);
            line.erase(0, pos + delimiter.length());
        }
        prmts.push_back(line);
        //while (prmts.size() < 81) prmts.push_back("0");
        
        
        tuple theTuple(stoi(prmts[0]));
        theTuple.setFirstEight(prmts[1], prmts[2], prmts[3], prmts[4],
                               prmts[5], prmts[6], prmts[7], prmts[8]);
        theTuple.setSecondEight(prmts[9], prmts[10], prmts[11], prmts[12],
                                prmts[13], prmts[14], prmts[15], prmts[16]);
        theTuple.setThirdEight(prmts[17], prmts[18], prmts[19], prmts[20],
                               prmts[21], prmts[22], prmts[23], prmts[24]);
        theTuple.setForthEight(prmts[25], prmts[26], prmts[27], prmts[28],
                               prmts[29], prmts[30], prmts[31], prmts[32]);
        theTuple.setFifthEight(prmts[33], prmts[34], prmts[35], prmts[36],
                               prmts[37], prmts[38], prmts[39], prmts[40]);
        theTuple.setSixthEight(prmts[41], prmts[42], prmts[43], prmts[44],
                               prmts[45], prmts[46], prmts[47], prmts[48]);
        theTuple.setSeventhEight(prmts[49], prmts[50], prmts[51], prmts[52],
                                 prmts[53], prmts[54], prmts[55], prmts[56]);
        theTuple.setEighthEight(prmts[57], prmts[58], prmts[59], prmts[60],
                                prmts[61], prmts[62], prmts[63], prmts[64]);
        theTuple.setNinthEight(prmts[65], prmts[66], prmts[67], prmts[68],
                               prmts[69], prmts[70], prmts[71], prmts[72]);
        theTuple.setTenthEight(prmts[73], prmts[74], prmts[75], prmts[76],
                               prmts[77], prmts[78], prmts[79], prmts[80]);
        tuples.push_back(theTuple);
    }
    return tuples;
}
