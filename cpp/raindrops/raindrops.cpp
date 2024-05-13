#include "raindrops.h"
using namespace std;
#include <string>

namespace raindrops {
    /*
    bool fact1, fact2, fact3;
    // Verifies if the number is a factor of 3
    bool IsFactorThree(int n){
        return n % 3 == 0;
    }
    
    // Verifies if the number is a factor of 5
    bool IsFactorFive(int n){
        return n % 5 == 0;
    }

    // Verifies if the number is a factor of 7
    bool IsFactorSeven(int n){
        return n % 7 == 0;
    }

    // Verifies if the number is a factor of 3 and 5
    bool IsFactorThree_Five(int n){
        return IsFactorThree(n) && IsFactorFive(n);
    }

    // Verifies if the number is a factor of 3 and 7
    bool IsFactorThree_Seven(int n){
        return IsFactorThree(n) && IsFactorSeven(n);
    }

    // Verifies if the number is a factor of 5 and 7
    bool IsFactorSeven_Five(int n){
        return IsFactorSeven(n) && IsFactorFive(n);
    }

    // Verifies if the number is not a factor
    bool IsFactorNone(int n){
        return !IsFactorThree(n) && !IsFactorFive(n) && !IsFactorSeven(n);
    }
    */
    //Converts the number to its appropriate raindrop
    string convert(int num){
        string result = "";

        //Use ternary operations: condition ? expression_if_true : expression_if_false
        // If the factor is the appropriate number then the right String will be added to result
        result += (num % 3 == 0) ? "Pling" : "";
        result += (num % 5 == 0) ? "Plang" : "";
        result += (num % 7 == 0) ? "Plong" : "";

        // If none of the factors are present, append the digits of the number
        if(result.empty()) {
            result = to_string(num);
        }

        return result;
    }
}  // namespace raindrops
