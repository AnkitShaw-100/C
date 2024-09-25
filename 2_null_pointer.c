#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = NULL; 
    ptr = (int*)malloc(2*sizeof(int));
    printf("%d \n", sizeof(NULL));
    if(ptr == NULL){
        printf("Memory could not be allocated\n");
    }
    else{
        printf("Memory allocated successfully\n");
    }

    free(ptr);

    return 0;
}