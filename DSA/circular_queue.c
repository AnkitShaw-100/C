#include <stdio.h>
#include <conio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } 
    else if ((rear + 1) % N == front) {
        printf("Queue is full !!\n");
    } 
    else {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } 
    else if (front == rear) {
        printf("Dequeued: %d\n", queue[front]);
        front = rear = -1;
    } 
    else {
        printf("Dequeued: %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void display() {
    int i = front;
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } 
    else {
        printf("Queue is: ");
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", queue[rear]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    display();
    return 0;
}
