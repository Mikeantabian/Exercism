#include "grade_school.h"
#include <algorithm>
namespace grade_school {
    
    school::school(): school_roster({}){}
    
    std::map<int, std::vector<std::string>> school::roster() const{
        return school_roster;
    }

    std::vector<std::string> school::grade(int gradeNum) const{
        auto it = school_roster.find(gradeNum);
        if(it != school_roster.end()){
            return it->second;
        } else {
            return {};
        }
    }

    void school::add(std::string name, int grade_num){
        school_roster[grade_num].push_back(name);
        std::sort(school_roster[grade_num].begin(), school_roster[grade_num].end());
    }
}  // namespace grade_school
