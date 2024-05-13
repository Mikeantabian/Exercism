#include "rotational_cipher.h"
#include <cstddef>
#include <string>
using std::string;

namespace rotational_cipher {
    
    const char uppercaseAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char lowercaseAlphabet[] = "abcdefghijklmnopqrstuvwxyz";
    
    string rotate(string text, int key){
        string cipher = "";
        int index = 0;

        for(size_t i = 0; i < text.size(); i++){
            if(isalpha(text[i])){
                index = findIndex(text[i], key);
                if(isupper(text[i])){
                    cipher += uppercaseAlphabet[index];
                } else {
                    cipher += lowercaseAlphabet[index];
                }
            } else {
                cipher += text[i];
            }
        }

        return cipher;
    }

    int findIndex(char a, int key){
        int arrLength = std::size(uppercaseAlphabet) - 1;
        int index = 0;
        for(int i = 0; i < arrLength; i++){
            if(a == uppercaseAlphabet[i] || a == lowercaseAlphabet[i]){
                index = i;
                break;
            }
        }
        int new_index = (index + key) % arrLength;
        return new_index;
    }
}  // namespace rotational_cipher
