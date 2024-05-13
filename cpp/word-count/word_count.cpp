#include "word_count.h"
#include <regex>

namespace word_count {

    const std::map<std::string, int> words(const std::string& text){
        std::map<std::string, int> wordCount;
        std::regex wordRegex("\\b[\\w']+\\b");
        std::smatch match;

        auto words_begin = std::sregex_iterator(text.begin(), text.end(), wordRegex);
        auto words_end = std::sregex_iterator();

        for (std::sregex_iterator it = words_begin; it != words_end; ++it) {
            std::string word = it->str();
            std::transform(word.begin(), word.end(), word.begin(), ::tolower);
            wordCount[word]++;
        }

        return wordCount;
    }
}  // namespace word_count
