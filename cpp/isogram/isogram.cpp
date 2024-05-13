#include "isogram.h"
#include <unordered_set>
#include <algorithm>

namespace isogram {
    bool is_isogram(const std::string& phrase){
        std::unordered_set<char> set;
        for(char c: phrase){
            if(isalpha(c)){
                char lowercaseC = tolower(c);
                if(set.count(lowercaseC) > 0){
                return false; // duplicate number
            }
            set.insert(lowercaseC);
            }
        }
        return true;
    }
}  // namespace isogram
