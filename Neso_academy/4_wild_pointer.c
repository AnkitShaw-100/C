#include <stdio.h>
#include <stdlib.h>

int main(){
    int var = 10;
    int *p;
    *p = 10;
    // p = &var; No more wild pointer
    return 0;
}