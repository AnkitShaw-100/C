#include <stdio.h>
void selection_sort(int arr[], int n){
    for(int i  = 0; i < n-1; i++){
    int min = i;
    for(int j = i+1; j < n; j++){
	if(arr[j]<arr[min]){
	min = j;
	}
    }
	int temp = arr[min];
	arr[min] = arr[i];
	arr[i] = temp;
    }
}
void printarray(int arr[], int n){
   for(int i  = 0; i < n; i++){
	printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
int arr[] = {62, 25, 12, 22, 11};
int n = sizeof(arr)/ sizeof (arr[0]);
selection_sort(arr, n);
printf("Sorted array using insertion sort: ");
printarray(arr, n);
return 0;
}
