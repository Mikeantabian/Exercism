#if !defined(LUHN_H)
#define LUHN_H
#include <string>

namespace luhn {
    bool valid(std::string code);
    std::string removeSpace(std::string originalCode);
    int digitDouble(int digit);
}  // namespace luhn

#endif // LUHN_H