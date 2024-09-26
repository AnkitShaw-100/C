#include <stdio.h>
#include <stdlib.h>

struct code {
    int i;
    char c;
    struct code *ptr;
};

int main() {
    struct code c1;
    struct code c2;

    c1.i = 10;
    c1.c = 'a';
    c1.ptr = &c2;

    c2.i = 40;
    c2.c = 'b';
    c2.ptr = NULL;

    printf("%d %c",c1.ptr->i, c1.ptr->c); //accesing memnber of c2 using c1
    
    return 0;
}