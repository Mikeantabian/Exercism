#include "protein_translation.h"

namespace protein_translation {
    vector<string> proteins(string RNA){
        string acid;
        vector<string> translation;
        while(RNA.size() >= 3){
            acid = RNA.substr(0,3);
            RNA.erase(0,3);
            if(acid == "AUG"){
                translation.emplace_back("Methionine");
            } else if(acid == "UUU" || acid == "UUC"){
                translation.emplace_back("Phenylalanine");
            } else if(acid == "UUA" || acid == "UUG"){
                translation.emplace_back("Leucine");
            } else if(acid == "UCU" || acid == "UCC" || acid == "UCA" || acid == "UCG"){
                translation.emplace_back("Serine");
            } else if(acid == "UAU" || acid == "UAC"){
                translation.emplace_back("Tyrosine");
            } else if(acid == "UGU" || acid == "UGC"){
                translation.emplace_back("Cysteine");
            } else if(acid == "UGG"){
                translation.emplace_back("Tryptophan");
            } else if(acid == "UAA" || acid == "UAG" || acid == "UGA"){
                break;
            }
        }
        return translation;
    }
}  // namespace protein_translation
