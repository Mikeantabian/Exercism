#include "etl.h"


namespace etl {

    std::map<char, int> transform(const std::map<int, std::vector<char>>& old) {
        std::map<char, int> result;

        for (const auto& entry : old) {
            int score = entry.first;
            const std::vector<char>& letters = entry.second;

            for (char letter : letters) {
                result[std::tolower(letter)] = score;
            }
        }

        return result;
    }

}  // namespace etl
