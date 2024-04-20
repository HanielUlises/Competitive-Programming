#include <iostream>
#include <vector>

template<typename T>
void backtrack(std::vector<std::vector<T>>& result, std::vector<T>& nums, int start) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); ++i) {
        std::swap(nums[start], nums[i]);
        backtrack(result, nums, start + 1);
        std::swap(nums[start], nums[i]);
    }
}

template<typename T>
std::vector<std::vector<T>> permute(std::vector<T>& nums) {
    std::vector<std::vector<T>> result;
    backtrack(result, nums, 0);
    return result;
}

template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums = {1, 2, 3};

    std::vector<std::vector<int>> permutations = permute(nums);

    for (const auto& permutation : permutations) {
        printVector(permutation);
    }

    return 0;
}
