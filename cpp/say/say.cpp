#include "say.h"
#include <stdexcept>
#include <vector>
using std::vector;
using std::string;


namespace say {
    std::string in_english(unsigned long long int num){
        if( static_cast<long long>(num) < 0 || num >= 1000000000000){
            throw std::domain_error("error");
        } 
        if (num == 0) return "zero";

        std::vector<std::string> below20 = {
            "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
            "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
            "seventeen", "eighteen", "nineteen"
        };

        std::vector<std::string> tens = {
            "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
        };

        std::vector<std::string> thousands = {"", "thousand", "million", "billion"};

        std::string result;

        for (int i = 0; num > 0; ++i) {
        if (num % 1000 != 0) {
            std::string group = print(num % 1000, below20, tens);
            if (!result.empty()) {
                if (!group.empty()) result = group + " " + thousands[i] + " " + result;
            } else {
                result = group + (thousands[i].empty() ? "" : " " + thousands[i]);
            }
        }
        num /= 1000;
    }

        return result;
    }

    string print(unsigned long long n, vector<string>& below20, vector<string>& tens){
        if(n == 0){
            return "";
        } else if(n < 20){
            return below20[n];
        } else if(n < 100){
            return tens[n/10] + (n % 10 == 0 ? "" : "-" + below20[n % 10]);; 
        } else {
            return below20[n / 100] + " hundred" + (n % 100 == 0 ? "" : " " + print(n % 100, below20, tens)); 
        }
    }
}  // namespace say
