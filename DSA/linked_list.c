#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void printing(struct Node *temp)
{
    if (temp == NULL)
    {
        printf("The list is empty\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void createNode()
{
    struct Node *newNode, *temp;
    int choice = 1;
    head = NULL;

    do
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = temp->next;
        }

        printf("Node created\n");
        printing(head);
        printf("Want to continue? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);
    } while (choice == 1);
}

void insert_at_beg(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at beginning\n", data);
    printing(head);
}

void insert_at_end(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    printf("Inserted %d at end\n", data);
    printing(head);
}

void deleteFromBeg()
{
    if (head == NULL)
    {
        printf("The list is already empty\n");
        return;
    }
    struct Node *temp = head;
    head = head->next;
    free(temp);
    printf("Deleted node from beginning\n");
    printing(head);
}

void delete_from_end()
{
    if (head == NULL)
    {
        printf("The list is already empty\n");
        return;
    }

    struct Node *temp = head;

    // Case: Only one node in the list
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("Deleted the last node\n");
        printing(head);
        return;
    }
}

int getLength()
{
    int length = 0; // Reset length at the beginning
    struct Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

int main()
{
    createNode();
    insert_at_beg(10);
    insert_at_beg(20);
    insert_at_beg(30);
    insert_at_beg(40);
    insert_at_end(50);
    insert_at_end(60);

    deleteFromBeg();
    deleteFromBeg();

    delete_from_end();
    delete_from_end();

    createNode();
    printf("Length of the list: %d\n", getLength());
    insert_at_beg(10);
    printf("Length of the list after insertion: %d\n", getLength());

    return 0;
}
