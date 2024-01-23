#include "bits/stdc++.h"

std::vector<int> WavePrint(int m, int n, std::vector<std::vector<int>> arr) {
    std::vector<int> result;
    for (int col = n - 1; col >= 0; col--) {
        if (col % 2 == 0) {
            for (int row = 0; row < m; row++) {
                result.push_back(arr[row][col]);
            }
        } else {
            for (int row = m - 1; row >= 0; row--) {
                result.push_back(arr[row][col]);
            }
        }
    }
    return result;
}

int main (){
    int arr[100][100];

    int n,m;

    std::cin>>n>>m;

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            std::cin>>arr[i][j];
        }
    }
}