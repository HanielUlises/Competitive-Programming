#include <iostream>

bool is_sorted(int arr[], int n){
    if (n == 1 or n == 0){
        return true;
    }

    if(arr[0]<arr[1] and is_sorted(arr + 1,n-1)){
        return true;
    }

    return false;
}

bool is_sorted_v (int arr[], int i, int n){
    if (i == n - 1){
        return true;
    }
    if(arr[i] < arr[i+1] and is_sorted_v(arr, i + 1, n)){
        return true;
    }

    return false;

}

int main (){
    int arr[]  = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    std::cout << is_sorted(arr, n);
}