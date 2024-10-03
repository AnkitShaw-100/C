#include <stdio.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

void print_stack() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack_arr[i]);
    }
}

int main() {
    push(10);
    push(20);
    print_stack();
   
    return 0;
}