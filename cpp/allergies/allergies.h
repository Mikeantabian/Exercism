#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <unordered_set>
using std::string;

namespace allergies {

class allergy_test{
    public:
        allergy_test(int allergens);
        bool is_allergic_to(string food);
        std::unordered_set<string> get_allergies();
    private:
        int allergens;
        string foodName;
};

}  // namespace allergies

#endif // ALLERGIES_H