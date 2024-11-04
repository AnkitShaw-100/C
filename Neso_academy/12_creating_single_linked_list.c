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
     
    printf("Data = %d\n", head->data);
    printf("Link = %p\n", head->link);
    printf("Data = %d\n", current->data);
    printf("Link = %p\n", current->link);
    
    return 0;
}