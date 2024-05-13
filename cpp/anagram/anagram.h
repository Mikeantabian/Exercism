#if !defined(ANAGRAM_H)
#define ANAGRAM_H
#include <string>
#include <vector>
#include <algorithm>

namespace anagram {
    class anagram{
        private:
            std::string target; // Target word for finding anagrams

        public:
            // Constructor
            anagram(const std::string& target);

            // Method to find anagrams of the target word from a list of candidates
            std::vector<std::string> matches(const std::vector<std::string>& candidates) const;
    };
}  // namespace anagram

#endif // ANAGRAM_H