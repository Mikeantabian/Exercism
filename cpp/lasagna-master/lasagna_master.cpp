#include "lasagna_master.h"
#include <algorithm>

namespace lasagna_master {
    //First part
    int preparationTime(vector<string> layers, int time){
        int size = layers.size();
        return size * time;
    }

    //Task 2
    amount quantities(vector<string> layers){
        int noodleAmt = std::count(layers.begin(), layers.end(), "noodles");
        double sauceAmt = std::count(layers.begin(), layers.end(), "sauce");
        
        amount result;
        result.noodles = noodleAmt * 50;
        result.sauce = sauceAmt * 0.2;

        return result;
    }

    //Task 3
    void addSecretIngredient(vector<string>& myList, const vector<string>& friendsList) {
        if (!myList.empty() && !friendsList.empty()) {
            myList.back() = friendsList.back(); // Replace the last element with the last element from the friend's list
        }
    }

    //Task 4
    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions) {
        double scaleFactor = static_cast<double>(portions) / 2.0;
        std::vector<double> scaledQuantities;
        scaledQuantities.reserve(quantities.size());

        for (double amount : quantities) {
            scaledQuantities.push_back(amount * scaleFactor);
        }

        return scaledQuantities;
    }

    //Task5
    void addSecretIngredient(std::vector<std::string>& myList, const std::string& secretIngredient) {
        if (!myList.empty()) {
            myList.back() = secretIngredient; // Replace the last element with the secret ingredient
        }
    }
}  // namespace lasagna_master
