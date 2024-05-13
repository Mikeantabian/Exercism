#include "series.h"
#include <stdexcept>

namespace series {
    vector<string> slice(const string& text, size_t l){
        vector<string> result;
        //int startIndex=0;

        if (l <= 0 || l > text.length() || text.empty()) {
            throw std::domain_error("invalid");
        }

        for(size_t i=0; i <= text.size() - l; i++){
            result.emplace_back(text.substr(i, l));
            //startIndex += l;
        }

        return result;
    }
}  // namespace series
