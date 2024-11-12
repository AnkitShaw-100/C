#include <stdio.h>

#define MAX_SIZE 5 

int stack[MAX_SIZE]; 
int top = -1; 

void push() {
    int x; 
    printf("Enter the data: ");
    scanf("%d", &x);
    if (top == MAX_SIZE - 1) {
        printf("Overflow: Stack is full\n");
    } else {
        top++;
        stack[top] = x;
        printf("Pushed %d onto the stack\n", x);
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow: Stack is empty\n");
    } else {
        int item = stack[top];
        top--;
        printf("Element popped out is: %d\n", item);
    }
}

void peek() {
    if (top == -1) {
        printf("Top is empty!\n");
    } else {
        printf("The topmost element is: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int ch;

    do {
        printf("Enter Choice (1: Push, 2: Pop, 3: Peek, 4: Display, 0: Exit): ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 0);

    return 0;
}
