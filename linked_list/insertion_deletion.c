#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node* insertatbeginning(struct node * head,int value);
struct node* insertatend(struct node * head,int value);
void display(struct node * head);

int main(){
    struct node * head= NULL;
    int value,choice;

    while(1){
        printf("1.Inseert at beginning\n");
        printf("2.Insert at end\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter the value to insert at beginning: ");
                scanf("%d",&value);
                head=insertatbeginning(head,value);
                break;
            case 2:
                printf("Enter the value to insert at end: ");
                scanf("%d",&value);
                head=insertatend(head,value);
                break;
            case 3:
                display(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}
struct node * insertatbeginning(struct node*head,int value){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(newnode));
    if(newnode==NULL){
        printf("Memory allocation failed\n");
        return head;
    }
}
struct node * insertatend(struct node*head,int value){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(newnode));
    if(newnode==NULL){
        printf("Memory allocation failed\n");
        return head;
    }

newnode -> data=value;
newnode ->next=NULL;

if(head==NULL){
    return newnode;
}
 struct node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newnode;
return head;
}
void display(struct node * head){
    struct node*temp=head;
    while(temp->next!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

