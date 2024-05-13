#include <array>
#include <string>
#include <vector>
using std::vector;
using std::array;

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // Loop through original vector and use floor to trunc
    int scoreSize = student_scores.size();
    vector<int> TruncedGrades{};
    for(int i = 0; i < scoreSize; i++){
        TruncedGrades.emplace_back(static_cast<int>(student_scores[i]));
    }
    return TruncedGrades;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // loop through and increment count when grade <= 40
    int count = 0;
    int scoreSize = student_scores.size();
    for(int i = 0; i < scoreSize; i++){
        if(student_scores[i] <= 40){
            count++;
        }
    }
    return count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // loop through vector and add above threshold grades to new vector
    int scoreSize = student_scores.size();
    vector<int> bestScores{};
    for(int i = 0; i < scoreSize; i++){
        if(student_scores[i] >= threshold){
            bestScores.emplace_back(student_scores[i]);
        }
    }
    return bestScores;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int letterSize = ((highest_score - 40)/4);
    array<int,4> letterBounds{};
    for(int i= 0; i < 4; i++){
        letterBounds[i] = 41 + letterSize*(i);
    }
    return letterBounds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    int scoreSize = student_scores.size();
    vector<std::string> studentList{};
    for(int i = 0; i < scoreSize; i++){
        studentList.emplace_back(std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return studentList;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // 
    int scoreSize = student_scores.size();
    std::string name;
    for(int i = 0; i < scoreSize; i++){
        if(student_scores[i] == 100){
            return student_names[i];
        }
    }
    return "";
}
