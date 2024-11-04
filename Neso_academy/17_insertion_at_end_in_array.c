#include<stdio.h>
#include<stdlib.h>

int add_at_end(int a[], int n, int freePos, int x){
    a[freePos] = x;
    freePos++;
    return freePos;
}

int main(){

    int a[10];
    int i, n, freePos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    freePos = n;
    freePos = add_at_end(a, n, freePos, 50);
    freePos = add_at_end(a, n, freePos, 150);

    printf("Array after adding 50 at the end: ");
    for(i=0; i<freePos; i++){
        printf("%d ", a[i]);
    }

    return 0;
}