#include "rna_transcription.h"
#include <algorithm>

namespace rna_transcription {
    char to_rna(char DNA){
        switch(DNA){
            case 'A':
                return 'U';
            case 'C':
                return 'G';
            case 'G':
                return 'C';
            case 'T':
                return 'A';
        }
    return ' ';
    }

    std::string to_rna(std::string DNA){
        std::transform(std::begin(DNA), std::end(DNA), std::begin(DNA),
                 [](char c) { return to_rna(c); });
        return DNA;
    }
}  // namespace rna_transcription
