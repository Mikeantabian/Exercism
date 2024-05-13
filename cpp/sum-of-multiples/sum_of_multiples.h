#if !defined(SUM_OF_MULTIPLES_H)
#define SUM_OF_MULTIPLES_H
#include <vector>
#include <unordered_set>

namespace sum_of_multiples {
    int to(std::vector<int> base, int level);
    int findSum(std::unordered_set<int> mult);
}  // namespace sum_of_multiples

#endif // SUM_OF_MULTIPLES_H