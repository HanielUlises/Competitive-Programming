#include "bits/stdc++.h"

void printSpiral(int matrix[][4], int rows, int columns){
    int startRow = 0;
    int endRow = rows - 1;
    int startColumn = 0;
    int endColumn = columns - 1;

    while (startColumn <= endColumn && startRow <= endRow){
        // Start row
        for(int col = startColumn; col <= endColumn; col++){
            std::cout<<matrix[startRow][col];
        }
        // End column
        for (int row = startRow; row <= endRow; row++){
            std::cout<<matrix[row][endColumn];
        }
        // End row
        for (int col = endColumn - 1; col >= startColumn; col--){
            if (startRow == endRow){
                break;
            }
            std::cout<<matrix[endRow][col];
        }

        for (int row = endRow - 1; row >= startRow + 1; row--){
            if (startColumn == endColumn){
                break;
            }
            std::cout<<matrix[row][startColumn];
        }

        startRow++;
        endRow--;
        startColumn++;
        endColumn--;
    }
}

int main(){
    int arr [][4] = {
        {1,2,3,4},
        {12,13,14,5},
        {11,16,15,6},
        {10,9,8,7}
    };

    printSpiral(arr, 4, 4);
}