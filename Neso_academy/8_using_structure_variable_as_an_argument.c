#include <stdio.h>

struct point{
    int x;
    int y;
};

void print(struct point p){
    printf("%d %d\n", p.x, p.y);
}

int main(){
    struct point p = {1, 2};
    struct point q = {3, 4};
    print(p);
    print(q);   
    return 0;
}