#if !defined(BEER_SONG_H)
#define BEER_SONG_H
#include <string>
#include <iostream>
using std::string;

namespace beer_song {
    string verse(int num);
    string sing(int start, int end = 0);
}  // namespace beer_song

#endif // BEER_SONG_H