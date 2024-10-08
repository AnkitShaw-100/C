#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* del_first(struct node* head) {
    if (head == NULL) {
        printf("List is already empty\n");
    } else {
        struct node *temp = head;
        head = head->link;
        free(temp);
    }
    return head;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = malloc(sizeof(struct node));
    head->link->data = 2;
    head->link->link = NULL;

    head = del_first(head);

    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}