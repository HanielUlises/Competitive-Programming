#include "bits/stdc++.h"

void printMatrix(int arr[][100], int rows, int columns){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout<<arr[i][j];
        }
        std::cout<<std::endl;
    }
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