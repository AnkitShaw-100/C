#include<stdio.h>
#include<stdlib.h>

int* fun(){
    int num = 10;
    return &num;  // Segmentation Fault
}

int main(){

    int *ptr = (int*)malloc(sizeof(int));
    free(ptr); // Dangling Pointer
    ptr = NULL;

    int *ptr1 = NULL;
    ptr1 = fun();
    printf("%d\n", *ptr1);
    return 0; // Segmentation Fault

}