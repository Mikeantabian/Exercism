#include "difference_of_squares.h"

namespace difference_of_squares {
    int square_of_sum(int n){
        //loop through all natural numbers n
        int sum{0};
        for(int i = 1; i <= n; i++){
            sum += i;
        }
        return sum * sum;
    }

    int sum_of_squares(int n){
        int sum{0}; int square{1};
        for(int i =1; i <= n; i++){
            square = i;
            square *= square;
            sum += square;
        }
        return sum;
    }

    int difference(int n){
        return (sum_of_squares(n) > square_of_sum(n)) ? sum_of_squares(n) - square_of_sum(n) : square_of_sum(n) - sum_of_squares(n);
    }
}  // namespace difference_of_squares
