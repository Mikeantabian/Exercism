#include <string>
using namespace std;

namespace log_line {
    
    string message(string LogLine){
        int index = 0;
        index = LogLine.find(":");
        return LogLine.substr(index + 2);
    }

    string log_level(string LogLine){
        int index1 = 0, index2 = 0;
        index1 = LogLine.find("[");
        index2 = LogLine.find("]");
        return LogLine.substr(index1+1, index2-index1-1);
    }

    string reformat(string LogLine){
        return message(LogLine) + " (" + log_level(LogLine) + ")"; 
    }
} // namespace log_line
