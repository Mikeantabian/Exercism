#if !defined(PASCALS_TRIANGLE_H)
#define PASCALS_TRIANGLE_H
#include <iostream>
#include <vector>

namespace pascals_triangle {
    std::vector<std::vector<int>> generate_rows(int n);
    int binomialCoeff(int n, int k);
}  // namespace pascals_triangle

#endif // PASCALS_TRIANGLE_H