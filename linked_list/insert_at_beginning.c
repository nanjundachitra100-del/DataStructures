#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node *nodenext;
};
q

struct node *insertatbeginning(struct node *head, int value) {
struct node *newnode;


newnode = (struct node *)malloc(sizeof(struct node));

if (newnode == NULL) {
    printf("Memory allocation failed\n");
    return head;
}

newnode->data = value;
newnode->nodenext = head;
head = newnode;

return head;


}

int main() {
struct node *head = NULL;


head = insertatbeginning(head, 10);
head = insertatbeginning(head, 20);
head = insertatbeginning(head, 30);

struct node *temp = head;

while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->nodenext;
}

printf("NULL\n");

return 0;


}