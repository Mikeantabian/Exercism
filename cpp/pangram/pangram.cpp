#include "pangram.h"

namespace pangram {
    bool is_pangram(std::string phrase){
        int count = 0;
        
        for(size_t i = 0; i < Alphabet.size(); i++){
            if(phrase.find(Alphabet[i]) != std::string::npos || phrase.find(alphabet[i]) != std::string::npos){
                count++;
            }
        }
        return count >= 26;
    }
}  // namespace pangram
