#include "two_fer.h"

namespace two_fer
{
    std::string two_fer(const std::string& name){
        std::string sentence = "One for " + name + ", one for me.";
        return sentence;
    }
} // namespace two_fer

