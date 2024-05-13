#if !defined(BOB_H)
#define BOB_H
#include <string>

namespace bob {
    std::string hey(std::string text);
    bool isAllCaps(std::string &text);
    bool isQuestion(std::string &text);
    std::string removeSpaceNums(const std::string& str);
}  // namespace bob

#endif // BOB_H