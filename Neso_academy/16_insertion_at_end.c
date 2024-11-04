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

void add_at_end(struct node* head, int data){
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;    
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

    printf("\nLinked list before adding at end\n");
    print_data(head);
    add_at_end(head, 78);
    add_at_end(head, 8);
    add_at_end(head, 45);
    add_at_end(head, 12);
    printf("\nLinked list after adding at end\n");
    print_data(head);
    return 0;
}