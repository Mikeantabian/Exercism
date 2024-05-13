#include "atbash_cipher.h"
#include <cctype>
using namespace std;
#include <string>


namespace atbash_cipher {
    string encode(string cipher){
        string new_Cipher = "";
        int charCount = 0;

        for(size_t i = 0; i< cipher.size(); i++){
            if(charCount % 5 == 0 && charCount != 0 && isalpha(cipher[i]) ){
                new_Cipher += " ";
            }

            if(isalpha(cipher[i])){
                if(isupper(cipher[i])){
                    cipher[i] = tolower(cipher[i]);
                    new_Cipher += 'z' - (cipher[i] - 'a');
                } else{
                    new_Cipher += 'z' - (cipher[i] - 'a');
                }
                charCount++;
            }else if(cipher[i] == ' ' || ispunct(cipher[i])){
                continue;
            } else {
                new_Cipher += cipher[i];
                charCount++;
            }
        }
        return new_Cipher;
    }

    string decode(string cipher){
        string og_text = "";

        for(size_t i = 0; i < cipher.size(); i++){
            if(isalpha(cipher[i])){
                og_text += 'z' - (cipher[i] - 'a');
            } 
            else if(cipher[i] == ' '){
                continue;
            } else {
                og_text += cipher[i];
            }
        }
        return og_text;
    }
}  // namespace atbash_cipher
