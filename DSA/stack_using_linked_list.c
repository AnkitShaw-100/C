#include <stdio.h>
#include <stdlib.h> // For malloc and free

#define MAX_SIZE 5 

struct Node {
    int data;
    struct Node *link;
};

struct Node *top = NULL; // Initialize top to NULL

void push(int x) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node)); // Allocate memory for new node
    if (newNode == NULL) { // Check for memory allocation failure
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = x; // Set the data
    newNode->link = top; // Link new node to the previous top
    top = newNode; // Update top to the new node
    printf("Pushed %d onto the stack\n", x);
}

void display() {
    struct Node *temp = top;
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", top->data);
    }
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        struct Node *temp = top;
        printf("Popped element is %d\n", top->data);
        top = top->link; // Move top to the next node
        free(temp); // Free the memory of the popped node
    }
}

int main() {
    int choice, value;

    do {
        printf("Enter choice (1: Push, 2: Pop, 3: Peek, 4: Display, 0: Exit): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
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
    } while (choice != 0);

    return 0;
}
