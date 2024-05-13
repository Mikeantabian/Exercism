#include "binary_search.h"
#include <stdexcept>

namespace binary_search {
    int find(const vector<int>& data, int title){
        int left = 0;
        int right = data.size()-1;

        while(left <= right){
            int mid = left + (right - left) /2;

            if(data[mid] == title){
                return mid;
            } else if( data[mid] < title){
                left = mid + 1;
            } else if( data[mid] > title){
                right = mid - 1;
            }
        }
        throw std::domain_error("not there");
    }
}  // namespace binary_search
