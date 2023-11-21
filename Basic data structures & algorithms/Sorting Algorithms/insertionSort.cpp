#include "bits/stdc++.h"

std::vector<int> insertionSort (std::vector<int> v){
    size_t size = v.size();
    for (int i = 1;)
    return v;
}

int main() {
    std::vector<int> unsorted;
    int inputVal;
    bool flag = true;

    do {
        std::cin >> inputVal;
        if(inputVal == -1) flag = false;
        unsorted.push_back(inputVal);
    } while(flag);

    std::vector<int> sorted = insertionSort(unsorted);
    for (auto x : sorted) {
        std::cout << x << ",";
    }

    return 0;
}