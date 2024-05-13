#include "sieve.h"
#include <cmath>

namespace sieve {
    std::vector<int> primes(int n){
        std::vector<bool> primeNums(n+1,true);
        int root = sqrt(n);

        primeNums[0] = false;primeNums[1] = false;

        for(int i = 2; i <= root; i++){
            if(primeNums[i] == true){
                for(int j = i * i; j <= n; j+=i){
                    primeNums[j] = false;
                }
            }
        }

        return primeNumbers(primeNums);
    }

    std::vector<int> primeNumbers(const std::vector<bool>& booleans){
        std::vector<int> numbers;
        for(size_t i= 0; i< booleans.size(); i++){
            if(booleans[i] == true){
                numbers.emplace_back(i);
            }
        }
        return numbers;
    }

}  // namespace sieve
