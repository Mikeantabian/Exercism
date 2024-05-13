#include "matching_brackets.h"
#include <stack>
//#include <algorithm>

namespace matching_brackets {
    bool check(std::string text){
        std::stack<char> brackets;

        for(char c : text){
            if(c == '[' || c == '{' || c == '('){
                brackets.push(c);
            }
            else if(c == ']' || c == '}' || c == ')'){
                if(brackets.empty()){
                    return false; // if the closing comes before the opening
                }
                char opening = brackets.top();
                if((opening == '[' && c != ']') || (opening == '{' && c != '}') || (opening == '(' && c != ')')){
                    return false;
                }
                brackets.pop(); // remove current opening if brackets match
            }
        }
        return brackets.empty();
    }

}  // namespace matching_brackets
