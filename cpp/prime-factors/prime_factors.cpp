#include "prime_factors.h"

namespace prime_factors {
    std::vector<int> of(int n){
        std::vector<int> primefact;
        for(int i =2; i <= n; i++){
            if(n % i == 0){
                primefact.emplace_back(i);
                n /= i;
                i--;
            }
        }
        return primefact;
    }
}  // namespace prime_factors
