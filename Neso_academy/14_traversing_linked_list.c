#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_of_nodes(struct node* head){
    int count = 0;
    if(head == NULL){
        printf("List is empty\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    printf("Number of nodes = %d\n", count);
}

int main(){
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

    count_of_nodes(head);
    return 0;
}