#include "pop_count.h"
using std::string;
#include <iostream>

namespace chicken_coop {
    //divide by 2 to convert to binary
    //No need to reverse result since we just need to count the 1s
    int positions_to_quantity(int decimal){
        int bin[32];
        int rem, i =0, count;
        while(decimal > 0){
            rem = decimal % 2;
            decimal /= 2;
            bin[i] = rem;
            i++;
        }
        for(int j=0; j < i; j++){
            if(bin[j] == 1){
                count++;
            }
        }
        return count;
    }

}  // namespace chicken_coop
