#include<bits/stdc++.h>

int maxSumSubarray(std::vector<int> A) {
    int maxSoFar = INT_MIN, maxEndingHere = 0;

    for (int i = 0; i < A.size(); i++) {
        maxEndingHere = maxEndingHere + A[i];
        if (maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;
        if (maxEndingHere < 0)
            maxEndingHere = 0;
    }
    return maxSoFar;
}

int main() {
    std::vector<int> A = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << "Maximum sum of a subarray is " << maxSumSubarray(A) << endl;
    return 0;
}
