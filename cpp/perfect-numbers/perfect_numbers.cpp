#include "perfect_numbers.h"

namespace perfect_numbers {
    classification classify(int number) {
        if (number <= 0) {
            throw std::domain_error("Number must be positive");
        }

        int aliquotSum = 0;
        for (int i = 1; i <= number / 2; ++i) {
            if (number % i == 0) {
                aliquotSum += i;
            }
        }

        if (aliquotSum == number) {
            return classification::perfect;
        } else if (aliquotSum > number) {
            return classification::abundant;
        } else {
            return classification::deficient;
        }
    }
}  // namespace perfect_numbers
