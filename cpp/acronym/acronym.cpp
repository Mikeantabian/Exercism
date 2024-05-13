#include "acronym.h"
#include <cstddef>

namespace acronym {
    /*std::string acronym(std::string phrase) {
        std::string acronym = "";

        // Add the first character of the phrase to the acronym
        if (!phrase.empty() && std::isalpha(phrase[0])) {
            acronym.push_back(std::toupper(phrase[0]));
        }

        size_t index = phrase.find_first_of(" -"); // Find the index of the first space or hyphen

        while (index != std::string::npos) {
            // Find the index of the next alphabetic character
            size_t nextAlphaIndex = phrase.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", index + 1);

            if (nextAlphaIndex != std::string::npos) {
                acronym.push_back(std::toupper(phrase[nextAlphaIndex]));
            }

            // Find the index of the next space or hyphen
            index = phrase.find_first_of(" -", nextAlphaIndex);
        }

        return acronym;
    }*/


    //better method from another person, just using as practice to understand better.
    //My method is the top one and also works
    std::string acronym(const std::string &phrase){
        std::string acronym = "";
        bool isletter = false;

        for(char c: phrase){

            if(c == '\''){ ;}
            else if(isalpha(c)){
                if(!isletter){
                    acronym.push_back(toupper(c));
                    isletter = true;
                } 
            }
            else{
                isletter = false;
            }
        }
        return acronym;
    }
}  // namespace acronym
