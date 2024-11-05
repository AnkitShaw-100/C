#include <stdio.h>

int interpolationSearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high && target >= arr[low] && target <= arr[high]) {
        int pos = low + ((target - arr[low]) * (high - low)) / (arr[high] - arr[low]);
        if (arr[pos] == target)
            return pos;
        else if (arr[pos] < target)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {2, 3, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int result = interpolationSearch(arr, n, target);
    if(result == -1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d\n", result);
    }               
    return 0;
}
