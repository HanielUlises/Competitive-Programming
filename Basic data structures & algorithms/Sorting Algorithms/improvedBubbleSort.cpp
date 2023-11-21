#include "bits/stdc++.h"

std::vector<int> optimizedBubbleSort(std::vector<int> v){
    bool flag = false;
    size_t size = v.size();
    for (int i = 0; i < size - 1 ; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if (v[j] > v[j + 1]){
                std::swap(v[j], v[j+1]);
                flag = true;
            }
        }
        if (flag == false){
            break;
        }
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

    std::vector<int> sorted = optimizedBubbleSort(unsorted);
    for (auto x : sorted) {
        std::cout << x << ",";
    }

    return 0;
}