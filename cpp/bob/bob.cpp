#include "bob.h"
#include <algorithm> // For std::remove_if
#include <cctype>
using std::string;


namespace bob {
    string hey(string text){
        text = removeSpaceNums(text);
        if(isQuestion(text) && isAllCaps(text)){
            return "Calm down, I know what I'm doing!";
        }
        else if(!text.empty() && isAllCaps(text)){
            return "Whoa, chill out!";
        }
        else if(isQuestion(text)){
            return "Sure.";
        }
        else if(text.empty()){
            return "Fine. Be that way!";
        } else {
            return "Whatever.";
        }
    }

    bool isAllCaps(string &text){
        bool caps = false;
        for (size_t i = 0; i < text.size(); i++) {
            if (std::isalpha(text[i])) {
                caps = true;
                if (std::islower(text[i])) {
                    return false;
                }
            }
        }
        return caps;
    }

    bool isQuestion(string &text){
        if(*text.rbegin() == '?'){
            return true;
        }
        return false;
    }

    std::string removeSpaceNums(const std::string& str) {
        std::string result = str;
        result.erase(std::remove_if(result.begin(), result.end(), ::isspace), result.end());
        return result;
    }
}  // namespace bob
