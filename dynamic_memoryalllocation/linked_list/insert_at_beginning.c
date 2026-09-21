#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node *head, *newnode;

int main(){
    newnode =(struct node *)malloc(sizeof(struct node));
    printf("Enter the data you want to insert :\n");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head=newnode;

    return 0;
}

