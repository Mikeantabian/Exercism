#include "allergies.h"

namespace allergies {

    allergy_test::allergy_test(int allergens): allergens(allergens){} //constructor

    bool allergy_test::is_allergic_to(std::string food){
        if(food == "cats"){
            if(allergens >= 128){
                allergens -= 128;
                return true;
            }
        }
        else if(food == "pollen"){
            if(allergens >= 64){
                allergens -= 64;
                return true;
            }
        }
        else if(food == "chocolate"){
            if(allergens >= 32){
                allergens -= 32;
                return true;
            }
        }
        else if(food == "tomatoes"){
            if(allergens >= 16){
                allergens -= 16;
                return true;
            }
        }
        else if(food == "strawberries"){
            if(allergens >= 8){
                allergens -= 8;
                return true;
            }
        }
        else if(food == "shellfish"){
            if(allergens >= 4){
                allergens -= 4;
                return true;
            }
        }
        else if(food == "peanuts"){
            if(allergens >= 2){
                allergens -= 2;
                return true;
            }
        }
        else if(food == "eggs"){
            if(allergens >= 1){
                allergens -= 1;
                return true;
            }
        }
        return false;
    }

    std::unordered_set<string> allergy_test::get_allergies(){
        std::unordered_set<string> allergyList;
        while(allergens > 0){
            if(allergens >= 256){
                allergens = allergens % 256;
            }
            if(allergens >= 128){
                allergyList.emplace("cats");
                allergens -= 128;
            }
            if(allergens >= 64){
                allergyList.emplace("pollen");
                allergens -= 64;
            }
            if(allergens >= 32){
                allergyList.emplace("chocolate");
                allergens -= 32;
            }
            if(allergens >= 16){
                allergyList.emplace("tomatoes");
                allergens -= 16;
            }
            if(allergens >= 8){
                allergyList.emplace("strawberries");
                allergens -= 8;
            }
            if(allergens >= 4){
                allergyList.emplace("shellfish");
                allergens -= 4;
            }
            if(allergens >= 2){
                allergyList.emplace("peanuts");
                allergens -= 2;
            }
            if(allergens >= 1){
                allergyList.emplace("eggs");
                allergens -= 1;
            }
        }
        return allergyList;
    }


}  // namespace allergies
