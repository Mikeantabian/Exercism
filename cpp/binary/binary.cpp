#include "binary.h"

namespace binary {
    int convert(const std::string& binary){
        int base = 1;
        int decimal = 0;
        for(size_t i = binary.size(); i > 0; i--){
            int num = binary[i-1] - '0';
            if(num >= 0 && num <= 1){
                decimal += (num * base);
                base *= 2;
            } else {
                return 0;
            }
        }
        return decimal;
    }
}  // namespace binary
