#include "bits/stdc++.h"

int binarySearch(std::vector<int> array, int size, int key){
    int s = 0;
    int e = n - 1;

    while (s <= e){
        int mid = (s+e)/2;

        if (array[mid] == key){
            return mid;
        }else if (array[mid] > key){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}

int main (){
    int arr[] = {11,23,56,67,88,32,34};
    int size = sizeof(arr)/size(int);

    int key;
    std::cin>>key;

    int index = binarySearch (arr, size, key);
    if(index != -1){
        std::cout<< key<< " at index "<< index << std::endl;
    }else{
        std::cout<<"Key not found"<<std::endl;
    }

}