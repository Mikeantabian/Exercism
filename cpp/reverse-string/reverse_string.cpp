#include "reverse_string.h"
using std::string;

namespace reverse_string {
    string reverse_string(std::string_view text){
        string reversedText = "";
        for(size_t i = 0; i < text.length(); i++){
            reversedText += text[text.length() - i - 1];
        }
        return reversedText;
    }
}  // namespace reverse_string
