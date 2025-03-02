#include <stdio.h>
#include <limits.h>

// Structure to store the results
typedef struct {
    int firstMin, secondMin;
    int firstMax, secondMax;
} MinMax;

// Function to merge results from two halves
MinMax mergeResults(MinMax left, MinMax right) {
    MinMax result;

    // Find first minimum
    if (left.firstMin < right.firstMin) {
        result.firstMin = left.firstMin;
        result.secondMin = (left.secondMin < right.firstMin) ? left.secondMin : right.firstMin;
    } else {
        result.firstMin = right.firstMin;
        result.secondMin = (right.secondMin < left.firstMin) ? right.secondMin : left.firstMin;
    }

    // Find first maximum
    if (left.firstMax > right.firstMax) {
        result.firstMax = left.firstMax;
        result.secondMax = (left.secondMax > right.firstMax) ? left.secondMax : right.firstMax;
    } else {
        result.firstMax = right.firstMax;
        result.secondMax = (right.secondMax > left.firstMax) ? right.secondMax : left.firstMax;
    }

    return result;
}

// Recursive function to find min and max
MinMax findMinMax(int arr[], int low, int high) {
    MinMax result, left, right;

    // Base case: Only one element
    if (low == high) {
        result.firstMin = result.secondMin = arr[low];
        result.firstMax = result.secondMax = arr[low];
        return result;
    }

    // Base case: Two elements
    if (high == low + 1) {
        result.firstMin = (arr[low] < arr[high]) ? arr[low] : arr[high];
        result.secondMin = (arr[low] < arr[high]) ? arr[high] : arr[low];

        result.firstMax = (arr[low] > arr[high]) ? arr[low] : arr[high];
        result.secondMax = (arr[low] > arr[high]) ? arr[high] : arr[low];

        return result;
    }

    // Divide the array into two halves
    int mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    // Merge results
    return mergeResults(left, right);
}

// Driver function
int main() {
    int arr[] = {12, 34, 5, 78, 23, 56, 89, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    MinMax result = findMinMax(arr, 0, n - 1);

    printf("First Minimum: %d\n", result.firstMin);
    printf("Second Minimum: %d\n", result.secondMin);
    printf("First Maximum: %d\n", result.firstMax);
    printf("Second Maximum: %d\n", result.secondMax);

    return 0;
}
