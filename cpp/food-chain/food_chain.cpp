#include "food_chain.h"

namespace food_chain {
    string verse(int line){
        string song;
        switch(line){
            case 1:
                song = "I know an old lady who swallowed a fly.\n"
                    "I don't know why she swallowed the fly. Perhaps she'll die.\n";
                break;
            case 2:
                song = "I know an old lady who swallowed a spider.\n"
                    "It wriggled and jiggled and tickled inside her.\n"
                    "She swallowed the spider to catch the fly.\n"
                    "I don't know why she swallowed the fly. Perhaps she'll die.\n";
                break;
            case 3:
                song = "I know an old lady who swallowed a bird.\n"
                "How absurd to swallow a bird!\n"
                "She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n"
                "She swallowed the spider to catch the fly.\n"
                "I don't know why she swallowed the fly. Perhaps she'll die.\n";
                break;
            case 4:
                song = "I know an old lady who swallowed a cat.\n"
                "Imagine that, to swallow a cat!\n"
                "She swallowed the cat to catch the bird.\n"
                "She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n"
                "She swallowed the spider to catch the fly.\n"
                "I don't know why she swallowed the fly. "
                "Perhaps she'll die.\n"; 
                break;
            case 5:
                song = "I know an old lady who swallowed a dog.\n"
                "What a hog, to swallow a dog!\n"
                "She swallowed the dog to catch the cat.\n"
                "She swallowed the cat to catch the bird.\n"
                "She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n"
                "She swallowed the spider to catch the fly.\n"
                "I don't know why she swallowed the fly. "
                "Perhaps she'll die.\n";
                break;
            case 6:
                song = "I know an old lady who swallowed a goat.\n"
        "Just opened her throat and swallowed a goat!\n"
        "She swallowed the goat to catch the dog.\n"
        "She swallowed the dog to catch the cat.\n"
        "She swallowed the cat to catch the bird.\n"
        "She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n"
        "She swallowed the spider to catch the fly.\n"
        "I don't know why she swallowed the fly. "
        "Perhaps she'll die.\n";
                break;
            case 7:
                song = "I know an old lady who swallowed a cow.\n"
        "I don't know how she swallowed a cow!\n"
        "She swallowed the cow to catch the goat.\n"
        "She swallowed the goat to catch the dog.\n"
        "She swallowed the dog to catch the cat.\n"
        "She swallowed the cat to catch the bird.\n"
        "She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n"
        "She swallowed the spider to catch the fly.\n"
        "I don't know why she swallowed the fly. "
        "Perhaps she'll die.\n";
                break;
            case 8:
                song = "I know an old lady who swallowed a horse.\n"
                "She's dead, of course!\n";  
                break;
        }
        return song;
    }

    string verses(int line1, int line2){
        string song;
        while(line1 <= line2){
            song += verse(line1);
            song += "\n";
            line1++;
        }
        return song;
    }

    string sing(){
        string song;
        song = verses(1, 8);
        return song;
    }
}  // namespace food_chain
