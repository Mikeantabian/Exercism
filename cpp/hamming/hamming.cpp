#include "hamming.h"
#include <cstddef>
#include <stdexcept>
#include <iostream>

namespace hamming {
    int compute(const std::string& DNA_1, const std::string& DNA_2){
        int count = 0;
        if(DNA_1.size() != DNA_2.size()){
            throw std::domain_error("DNA strands don't share the same size");
        }

        for(size_t i =0; i < DNA_1.size(); i++){
            if(DNA_1[i] != DNA_2[i]){
                count++;
            }
        }
        return count;
    }
}  // namespace hamming
