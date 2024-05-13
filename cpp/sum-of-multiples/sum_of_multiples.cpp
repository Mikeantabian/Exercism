#include "sum_of_multiples.h"
#include <iostream>

namespace sum_of_multiples {
    int to(std::vector<int> base, int level){
        std::unordered_set<int> multiples;
        for(int b: base){
            int multiple = b;
            while(multiple < level){
                multiples.insert(multiple);
                multiple += b;
            }
        }
        return findSum(multiples);
    }

    int findSum(std::unordered_set<int> mult){
        int sum = 0;
        for(int m: mult){
            sum += m;
        }
        return sum;
    }
}  // namespace sum_of_multiples
