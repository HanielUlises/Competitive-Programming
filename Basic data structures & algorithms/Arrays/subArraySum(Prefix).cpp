#include "bits/stdc++.h"

void largestSubArraySum (int array[], int n){
    // Prefix sum
    int prefix[n] = {0};
    prefix[0] = array[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + array[i];
    }

    // Similar to brute force but using prefixes
    int largest_sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int subArraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largest_sum = std::max(largest_sum, subArraySum);
        }
    }
    return largest_sum;
}

int main (){
    int array[] = {-2,3,4,-1,5,-12,5,6,1,3};
    int n = sizeof(array)/sizeof(int);

    std::cout<<largestSubArraySum(array,n)<<std::endl;
}