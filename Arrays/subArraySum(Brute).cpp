#include "bits/stdc++.h"

// All the sub sets of a given set
void printSubArrays(int array, int size){
    int largestSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int subArrSum = 0;
            for(int k = i; k <= j, k++){
                subArrSum += array[k];
            }
            largestSum = std::max(largestSum, subArrSum)M
        }
    }
    return largestSum;
}

int main (){
    int array [] = {-2,-4,3,5,-10,-15,25};
    int size = sizeof(array)/sizeof(int);

    printSubArrays(array, size);
}