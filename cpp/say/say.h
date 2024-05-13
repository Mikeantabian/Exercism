#if !defined(SAY_H)
#define SAY_H
#include <string>
#include <vector>
#include <stdexcept>

namespace say {
    std::string in_english(unsigned long long int num);
    std::string print(unsigned long long int, std::vector<std::string>& below20, std::vector<std::string>& tens);
}  // namespace say

#endif // SAY_H