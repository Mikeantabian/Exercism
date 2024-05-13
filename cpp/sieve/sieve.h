#if !defined(SIEVE_H)
#define SIEVE_H
#include <vector>
#include <array>

namespace sieve {
    std::vector<int> primes(int n);
    std::vector<int> primeNumbers(const std::vector<bool>& booleans);
}  // namespace sieve

#endif // SIEVE_H