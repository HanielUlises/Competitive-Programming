#include "bits/stdc++.h"

void largestSubArraySum (int array[], int n){
    int cs = 0;
    int largest = 0;

    for(int i = 0; i < n; i++){
        cs = cs + array[i];
        if(cs < 0){
            cs = 0;
        }
        largest = std::max(largest, cs);
    }
    return largest_sum;
}

int main (){
    int array[] = {-2,3,4,-1,5,-12,5,6,1,3};
    int n = sizeof(array)/sizeof(int);

    std::cout<<largestSubArraySum(array,n)<<std::endl;
}