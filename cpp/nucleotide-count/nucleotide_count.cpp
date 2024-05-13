#include "nucleotide_count.h"
#include <stdexcept>
#include <iostream>

namespace nucleotide_count {
    
    

    std::map<char, int> count(std::string DNA){
        std::map<char, int> nucleotide = {{'A',0},{'C',0},{'G',0},{'T',0}};
        for(char c: DNA){
            if( c == 'A' || c == 'C' || c == 'G' || c == 'T'){
                nucleotide[c]++;
            } else {
                throw std::invalid_argument("error");
            }
        }
        return nucleotide;
    }
}  // namespace nucleotide_count
