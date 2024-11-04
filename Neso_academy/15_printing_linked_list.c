#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void print_data(struct node* head){
    if(head == NULL){
        printf("List is empty\n");
    } 
    else {
        struct node *current = head;
        while(current != NULL){
            printf("Data = %d\n", current->data);
            printf("Link = %p\n", current->link);
            current = current->link;
        }
    }
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

    print_data(head);
    return 0;
}