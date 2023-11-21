#include "bits/stdc++.h"

// Print all pairs of elements
void printPairs (int array[], int n){
    for(int = 0 ; i < n; i++){
        int x = array[i];
        for(int j = i + 1; j < n; j++){
            int y = array[j];

            std::cout<< x << ","<< y << std::endl;
        }
        std::cout<<std::endl;
    }
}

int main (){
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(int);
    
    printPairs();
}