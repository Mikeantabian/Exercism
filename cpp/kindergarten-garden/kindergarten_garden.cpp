#include "kindergarten_garden.h"
#include <unordered_map>


namespace kindergarten_garden {

    std::unordered_map<std::string, int> nameIndexMap = {
        {"Alice", 0}, {"Bob", 1}, {"Charlie", 2}, {"David", 3},
        {"Eve", 4}, {"Fred", 5}, {"Ginny", 6}, {"Harriet", 7},
        {"Ileana", 8}, {"Joseph", 9}, {"Kincaid", 10}, {"Larry", 11}
    };

    
    std::array<Plants, 4> plants(const std::string& plantRows, const std::string& name) {
        // Find the index of the newline character
        size_t newlinePos = plantRows.find('\n');
        if (newlinePos == std::string::npos) {
            // Handle error: No newline found
            return {}; // or some default value
        }

        // Split the string into two substrings, one for each row
        std::string firstRow = plantRows.substr(0, newlinePos);
        std::string secondRow = plantRows.substr(newlinePos + 1);

        // Process the rows separately
        std::array<Plants, 2> firstRowPlants = processRow(firstRow, name);
        std::array<Plants, 2> secondRowPlants = processRow(secondRow, name);


        /*
        // Debug print the contents of the rows
        std::cout << "First row plants: ";
        for (const auto& plant : firstRowPlants) {
            std::cout << static_cast<int>(plant) << " ";
        }
        std::cout << std::endl;

        std::cout << "Second row plants: ";
        for (const auto& plant : secondRowPlants) {
            std::cout << static_cast<int>(plant) << " ";
        }
        std::cout << std::endl;*/

        // Combine the results
        std::array<Plants, 4> combinedPlants;
        combinedPlants.fill(Plants::clover); // Initialize with some default value

        // Copy plants from both rows to the combined array
        std::copy(firstRowPlants.begin(), firstRowPlants.end(), combinedPlants.begin());
        std::copy(secondRowPlants.begin(), secondRowPlants.end(), combinedPlants.begin() + 2);

        return combinedPlants;
    }

    std::array<Plants, 2> processRow(const std::string& row, const std::string& name) {
        // Get the index for the given name
        int startIndex = nameIndexMap[name] * 2;

        std::array<Plants, 2> tempPlants;

        for (int i = startIndex, j = 0; i < startIndex + 4; i += 1, ++j) {
            char plantCode = row[i];
            switch (plantCode) {
                case 'C':
                    tempPlants[j] = kindergarten_garden::Plants::clover;
                    break;
                case 'G':
                    tempPlants[j] = kindergarten_garden::Plants::grass;
                    break;
                case 'V':
                    tempPlants[j] = kindergarten_garden::Plants::violets;
                    break;
                case 'R':
                    tempPlants[j] = kindergarten_garden::Plants::radishes;
                    break;
                default:
                    // Handle invalid plant code
                    break;
            }
        }

        return tempPlants;
    }

}  // namespace kindergarten_garden
