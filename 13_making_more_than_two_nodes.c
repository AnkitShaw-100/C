#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current; // link part of head (1st node) contains the address of current

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL; // creating 3rd node dynamically
    head->link->link = current; // link part of 2nd node contains the address of current

    // Traverse and print all elements in the linked list
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("Data = %d, Link = %p\n", ptr->data, (void*)ptr->link);
        ptr = ptr->link;
    }

    return 0;
}