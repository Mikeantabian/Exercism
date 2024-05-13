#include "darts.h"
#include <cmath>
#include <math.h>

namespace darts {
    double score(double x, double y){
        double magnitude = 0;
        magnitude = sqrt(pow(x, 2) + pow(y, 2));

        if(magnitude > 10){
            return 0;
        } 
        else if(magnitude <= 1){
            return 10;
        }
        else if(magnitude > 1 && magnitude <= 5){
            return 5;
        } else {
            return 1;
        }
    }
} // namespace darts