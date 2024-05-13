#include "vehicle_purchase.h"

namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        // return true if kind is car or truck
        return kind == "car" || kind == "truck";
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        // Compare the two strings and pick the smaller one since its in lexicographical order
        std::string answer= "";
        if (option1 > option2){
            answer = option2;
        } else {
            answer = option1;
        }
        return answer + " is clearly the better choice.";
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        // Use if else statements for three different cases. Switch statement is also usable
        double price = 0;
        if(age < 3){
            price = original_price * 0.8;
        } else if(age >= 10) {
            price = original_price * 0.5;
        } else { // between 3 and 10 years
            price = original_price * 0.7;
        }
        return price;
    }

}  // namespace vehicle_purchase