#if !defined(SERIES_H)
#define SERIES_H
#include <vector>
#include <string>
#include <stdexcept>
using std::vector;
using std::string;

namespace series {
    vector<string> slice(const string& text, size_t l);
}  // namespace series

#endif // SERIES_H