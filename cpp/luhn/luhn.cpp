#include "luhn.h"
#include <cctype>
using std::string;

namespace luhn {
    bool valid(string code){
        bool secondDig = false;
        int sum = 0;
        code = removeSpace(code);
        for(int i = code.size()-1; i >= 0; i--){
            if(!isdigit(code[i]) || code.size() < 2) { return false; }
            int digit = code[i] - '0';
            if(secondDig){
                digit = digitDouble(digit);
            }
            sum += digit;
            secondDig = !secondDig;
        }
        return (sum % 10 == 0);
    }

    string removeSpace(string originalCode){
        for (size_t i = 0; i < originalCode.length(); i++){
            if(originalCode[i] == ' '){
                originalCode.erase(originalCode.begin() + i);
                i--; //decrement since letter after space is now where the space was
            }
        }
        return originalCode;
    }

    int digitDouble(int digit){
        digit *= 2;
        if(digit > 9){
            digit -= 9;
        }
        return digit;
    }
}  // namespace luhn
