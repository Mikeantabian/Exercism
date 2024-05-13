#if !defined(WORD_COUNT_H)
#define WORD_COUNT_H
#include <string>
#include <map>
#include <iostream>
#include <sstream>
using std::string;
using std::map;

namespace word_count {
    const std::map<std::string, int> words(const string& text);
}  // namespace word_count

#endif // WORD_COUNT_H