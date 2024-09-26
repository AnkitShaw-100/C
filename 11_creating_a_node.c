#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head  = (struct  node*)malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    printf("Data = %d\n", head->data);
    printf("Link = %p\n", head->link);
    
    return 0;
}