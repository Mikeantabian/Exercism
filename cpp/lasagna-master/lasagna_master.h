#pragma once
#include <string>
#include <vector>
using std::string;
using std::vector;

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

    int preparationTime(vector<string> layers, int time = 2);
    amount quantities(vector<string> layers);
    void addSecretIngredient(vector<string>& myList, const vector<string>& friendsList);
    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions);
    void addSecretIngredient(std::vector<std::string>& myList, const std::string& secretIngredient);
}  // namespace lasagna_master
