#if !defined(HAMMING_H)
#define HAMMING_H
#include <stdexcept>
#include <string>

namespace hamming {
    int compute(const std::string& DNA_1, const std::string& DNA_2);
}  // namespace hamming

#endif // HAMMING_H