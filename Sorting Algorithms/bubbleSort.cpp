#include "bits/stdc++.h"

void bubbleSort (int a[], int n){
    for(int i=0; i <= n - 1; i++){
        for(int j = 0; j <= n; j++){
            if(a[j] > a[j+1]){
                std::swap(a[j], a[j+1]);
            }
        }
    }
}

int main (){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort (arr, n);
    
    for (auto x: arr){
        std::cout<< x << ",";
    }
}