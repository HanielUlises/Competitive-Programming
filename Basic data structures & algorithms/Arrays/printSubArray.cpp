#include "bits/stdc++.h"

// All the sub sets of a given set
void printSubArrays(int array, int size){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = i; k <= j, k++){
                std::cout<< array[k]<<",";
            }
            std::cout<<std::endl;
        }
    }
}

int main (){
    int array [] = {10,20,30,40,50,60};
    int size = sizeof(array)/sizeof(int);

    printSubArrays(array, size);
}