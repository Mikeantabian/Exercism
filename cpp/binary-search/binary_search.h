#if !defined(BINARY_SEARCH_H)
#define BINARY_SEARCH_H
#include <stdexcept>
#include <vector>
#include <cstddef>
using std::vector;

namespace binary_search {
    int find(const vector<int>& data, int title);
}  // namespace binary_search

#endif // BINARY_SEARCH_H