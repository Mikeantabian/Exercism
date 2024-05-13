#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {
    int steps(int num){
        int count = 0;
        if(num <= 0 ){
            throw std::domain_error("error");
        }
        while(num != 1){
            if(num % 2 == 0){
                num /= 2;
                count++;
            }
            else if(num % 2 == 1){
                num *= 3;
                num++;
                count++;
            }
        }
        return count;
    }
}  // namespace collatz_conjecture
