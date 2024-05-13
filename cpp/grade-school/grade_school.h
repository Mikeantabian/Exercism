#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H
#include <string>
#include <vector>
#include <map>

namespace grade_school {
    class school{
        public:
            school();
            std::map<int, std::vector<std::string>> roster() const;
            std::vector<std::string> grade(int gradeNum) const;
            void add(std::string name, int grade_num);
        private:
            std::map<int, std::vector<std::string>> school_roster;
    };
}  // namespace grade_school

#endif // GRADE_SCHOOL_H