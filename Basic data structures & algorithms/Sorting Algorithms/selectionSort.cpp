#include "bits/stdc++.h"

std::vector<int> selectionSort (std::vector<int> v){
    size_t vSize = v.size();
    for(int i = 0; i <= vSize - 2; i++){
        int actual = v[pos];
        int min_position = i;

        for(int j = i; j < n; j++){
            if(v[j] < v[min_position]){
                min_position = j;
            }
        }
        std::swap(v[min_position], v[í]);
    }
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

    std::vector<int> sorted = selectionSort(unsorted);
    
    for (auto x : sorted) {
        std::cout << x << ",";
    }

    return 0;
}