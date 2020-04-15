#include <stdio.h>
#include <stdlib.h>

struct Node
{
    // Node structure: Includes data (int) and pointer to next node
    int data;
    struct Node *next;
};

void printList(struct Node *n)
{
    // Print called node and following values pointed until reaching last (NULL)
    while (n != NULL)
    {
        printf("% d ", n->data);
        n = n->next;
    }
}

int main()
{
    // Create pointer variables
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Assign a pointer and space to pointer variables
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Assign (1)int values and (2)next pointing struct
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Print linked list using created function
    printList(head);

    return 0;
}