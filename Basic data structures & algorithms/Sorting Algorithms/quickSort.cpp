#include <iostream>
#include <vector>

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSortUtil(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSortUtil(arr, low, pivotIndex - 1);
        quickSortUtil(arr, pivotIndex + 1, high);
    }
}

std::vector<int> quickSort(std::vector<int> arr) {
    int n = arr.size();
    quickSortUtil(arr, 0, n - 1);
    return arr;
}

int main() {
    std::vector<int> unsorted;
    int inputVal;
    bool flag = true;

    do {
        std::cin >> inputVal;
        if (inputVal == -1) flag = false;
        else unsorted.push_back(inputVal);
    } while (flag);

    std::vector<int> sorted = quickSort(unsorted);

    for (auto x : sorted) {
        std::cout << x << ",";
    }

    return 0;
}
