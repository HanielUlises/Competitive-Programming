#include "bits/stdc++.h"


void reverseArray(int arr[], int n){
    int s = 0;
    int e = n - 1;

    while (s < e){
        std::swap(arr[s],arr[e]);
        s += 1;
        e -= 1;
    }
}

int main(){
    int arr[] = {10,20,30,45,60,80,90};
    int n = sizeof(arr)/sizeof(int);

    reverseArray(arr, n);
    return 0;
}