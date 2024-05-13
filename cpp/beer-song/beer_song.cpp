#include "beer_song.h"
#include <string>

namespace beer_song {
    string verse(int num){
        string song;
        if(num == 0){
            song = "No more bottles of beer on the wall, no more bottles of beer.\n"
            "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
        } else if(num == 2){
            song = std::to_string(num) + " bottles of beer on the wall, " +  std::to_string(num) + " bottles of beer.\n"  
            "Take one down and pass it around, " + std::to_string(num-1)  + " bottle of beer on the wall.\n";
        } else if(num == 1){
            song = std::to_string(num) + " bottle of beer on the wall, " +  std::to_string(num) + " bottle of beer.\n"  
            "Take it down and pass it around, no more bottles of beer on the wall.\n";

        } else {
            song = std::to_string(num) + " bottles of beer on the wall, " +  std::to_string(num) + " bottles of beer.\n"  
            "Take one down and pass it around, " + std::to_string(num-1)  + " bottles of beer on the wall.\n";

        }
        
        return song;
    }

    string sing(int start, int end){
        string song;
        for(int i = start; i >= end; i--){
            song += verse(i);
            song += (i != end) ? "\n" : ""; 
        }
        return song;
    }
}  // namespace beer_song
