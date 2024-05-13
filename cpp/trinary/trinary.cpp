#include "trinary.h"
#include <cmath>
#include <iostream>
#include <string>

namespace trinary {
    int to_decimal(std::string trinary){
        int decimal = 0;
        for(size_t i = 0; i < trinary.size(); i++){
            //std::cout << trinary.size() << std::endl;
            if(trinary[i] > '2'){
                decimal = 0;
                break;
            }else{
                decimal += (trinary[i]-'0') * pow(3,trinary.size()-i-1);
            }
        }
        return decimal;
    }
}  // namespace trinary
