#include "pascals_triangle.h"

namespace pascals_triangle {

    std::vector<std::vector<int>> generate_rows(int n)
    {
        std::vector<std::vector<int>> triangle;
        triangle.reserve(n);
        
        // Iterate through every line and
        // generate entries in it
        for (int line = 0; line < n; line++) {
            std::vector<int> row(line + 1);
            for (int i = 0; i <= line; i++)
                row[i] = binomialCoeff(line, i);
            triangle.push_back(row);
        }
        
        return triangle;
    }

    int binomialCoeff(int n, int k)
    {
        int res = 1;
        if (k > n - k)
            k = n - k;
        for (int i = 0; i < k; ++i) {
            res *= (n - i);
            res /= (i + 1);
        }
    
        return res;
    }

}  // namespace pascals_triangle
