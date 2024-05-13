#include "armstrong_numbers.h"
#include <cmath>
#include <string>
using std::string;


namespace armstrong_numbers {
    bool is_armstrong_number(int num){
        string number = std::to_string(num);
        size_t digAmt = number.size();     
        int sum = 0;
        for(size_t i = 0; i < digAmt; i++){
            int n = number[i] - '0';
            sum += pow(n, digAmt);
        }
        return (sum == num);
    }
}  // namespace armstrong_numbers
