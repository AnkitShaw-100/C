#include <stdio.h>

// Bubble sort algorithm
void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0 ; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_array(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {133, 332, 9290, 12, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    printf("Sorted array using bubble sort: ");
    print_array(arr, n);

    return 0;
}

