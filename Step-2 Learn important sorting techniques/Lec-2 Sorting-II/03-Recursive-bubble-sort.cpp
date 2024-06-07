#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr, int n) {
    if (n == 1) {
        return;  // Base case: If only one element is left, the array is sorted.
    }

    // One pass of bubble sort to move the largest element to the end.
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
    }

    // Recursively sort the remaining elements (n-1) times.
    bubbleSort(arr, n - 1);
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr, arr.size());

    std::cout << "Sorted Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
