#include <iostream>
#include <vector>

void generateSubsets(int index, const std::string &input, std::string &current, std::vector<std::string> &result) {
    // Base case: if the end of the string is reached, add the current subset to the result
    if (index == input.length()) {
        result.push_back(current);
        return;
    }

    // Current character
    current.push_back(input[index]);
    generateSubsets(index + 1, input, current, result);

    // Exclude the current character (backtrack)
    current.pop_back();
    generateSubsets(index + 1, input, current, result);
}

int main() {
    std::string input;
    std::cin >> input; 

    std::vector<std::string> subsets;
    std::string currentSubset;

    generateSubsets(0, input, currentSubset, subsets);

    for (const std::string &subset : subsets) {
        if (subset.empty()) {
            std::cout << "{}";
        } else {
            std::cout << subset << ",";
        }
    }

    return 0;
}
