#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;

int main() {

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the value:\n");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if(head == NULL) {
        head = newnode;
    }
    else {
        temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    return 0;
}