#include <iostream>
using std::string;

namespace hexadecimal {
    int convert(string Hex){
        int decimal = 0;
        int base = 1;
        for(int i = Hex.size() - 1; i >= 0; i--){
            if(Hex[i] >= '0' && Hex[i] <= '9'){
                decimal += (Hex[i] - '0')* base;
                base *= 16;
            }
            else if((Hex[i] >= 'A' && Hex[i] <= 'F') || (Hex[i] >= 'a' && Hex[i] <= 'f')){
                if(islower(Hex[i])){
                    Hex[i] = toupper(Hex[i]);
                }
                decimal += ((Hex[i] - 'A') + 10) * base;
                base *= 16;
            } else {
                return 0;
            }
        }
        return decimal;
    }
}  // namespace hexadecimal
