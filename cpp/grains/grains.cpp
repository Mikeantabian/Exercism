#include "grains.h"
#include <cmath>

namespace grains {
    //static unsigned long long sum =0;
    unsigned long long square(int sq){
        unsigned long long grains;
        grains = pow(2,sq-1);
        return grains;
    }

    unsigned long long total(){
        unsigned long long sum = 0;
        for(int i = 1; i <= 64; i++){
            sum += square(i);
        }
        return sum;
    }
}  // namespace grains
