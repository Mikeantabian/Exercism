#include "anagram.h"

namespace anagram {
    // Constructor to initialize the target word
    anagram::anagram(const std::string& target) : target(target) {}

    // Helper function to normalize a word by converting it to lowercase
    std::string normalize(const std::string& word) {
        std::string normalized_word = word;
        std::transform(normalized_word.begin(), normalized_word.end(), normalized_word.begin(), ::tolower);
        return normalized_word;
    }

    // Helper function to check if two words are anagrams
    bool is_anagram(const std::string& word1, const std::string& word2) {
        if (word1.length() != word2.length()) {
            return false;
        }
        std::string sorted_word1 = normalize(word1);
        std::string sorted_word2 = normalize(word2);
        std::sort(sorted_word1.begin(), sorted_word1.end());
        std::sort(sorted_word2.begin(), sorted_word2.end());
        return sorted_word1 == sorted_word2;
    }

    // Method to find anagrams of the target word from a list of candidates
    std::vector<std::string> anagram::matches(const std::vector<std::string>& candidates) const {
        std::vector<std::string> anagrams;
        for (const auto& candidate : candidates) {
            if (is_anagram(target, candidate) && normalize(target) != normalize(candidate)) {
                anagrams.push_back(candidate);
            }
        }
        return anagrams;
    }

}  // namespace anagram
