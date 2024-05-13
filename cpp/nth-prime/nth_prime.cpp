#include "nth_prime.h"
#include <stdexcept>

namespace nth_prime {
    int nth(int num){
        if(num <= 0){
            throw std::domain_error("Invalid Input");
        }
        int count = 0;
        int testNum = 2;
        int result;
        //increment until nth prime number is reached
        while(count < num){
            if(isPrime(testNum)){
                count++;
                result = testNum;
            }
            testNum++;
        }
        return result;
    }

    bool isPrime(int n){
        if(n <= 1){ 
            return false; 
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        
        return true;

    }
}  // namespace nth_prime
