#if !defined(PANGRAM_H)
#define PANGRAM_H
#include <string>

namespace pangram {

    const static std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    const static std::string Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    bool is_pangram(std::string phrase);

}  // namespace pangram

#endif // PANGRAM_H