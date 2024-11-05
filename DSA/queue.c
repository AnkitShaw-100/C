#include <stdio.h>
#include <conio.h>

#define N 5 
int queue[N];
int front = -1;
int rear = -1;


void enqueue(int x) {
    if (rear == N - 1) {
        printf("Overflow\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Underflow\n");
    } else if (front == rear) {
        printf("Dequeued: %d\n", queue[front]);
        front = rear = -1;
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

void display() {
    int i;
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Front data: %d\n", queue[front]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    peek();
    dequeue();
    peek();
    display();
    return 0;
}
