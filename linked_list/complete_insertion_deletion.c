#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

typedef struct header{
    node * first;
    node * last;
    int count;
}Header;

void initheader(Header * h);
node *createnode (int data);
void insertatbeginning(Header * h, int data);
void insertatend(Header * h,int data);
void insertatposition(Header * h,int data ,int position);
void deleteatbeginning(Header * h);
void deleteatend(Header * h);
int getcount(const Header * h);
void displaylist(const Header * h);
void freelist(Header * h);

void initheader(Header * h){
    if(h==NULL){
        return;
    }
    h->first=NULL;
    h->last=NULL;
    h->count=0;
    }

node *createnode (int data){
    node * newnode =(node*)malloc(sizeof(node));
    if(newnode==NULL){
        fprintf(stderr,"Memory allocation failed\n");
        exit(1);
    }
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

void insertatbeginning(Header * h,int data){
    if(h==NULL){
        return;
    }
    node * newnode = createnode(data);
    if(h->first==NULL){
        h->first=newnode;
        h->last=newnode;
    }
    else{
        newnode->next=h->first;
        h->first=newnode;
    }
    h->count++;
}
void insertatend(Header * h,int data){
    if(h==NULL){
        return;
    }
    node*newnode =createnode(data);
    if(newnode==NULL){
        fprintf(stderr,"Memory allocation failed\n");
        exit(1);
    }
    if(h->last==NULL){
        h->first=newnode;
        h->last=newnode;
    }
    else{
        h->last->next=newnode;
        h->last=newnode;
    }
    h->count++;
}

void insertatposition(Header * h,int data,int position){
    if(h=NULL){
        return;
    }
    if(position <1){
        printf("Invalid position\n");
        return;
    }
    if(position >h->count+1){
        printf("Invalid position\n");
        return;
    }
    if(position==1){
        insertatbeginning(h,data);
        return;
    }
    if(position==h->count+1){
        insertatend(h,data);
        return;
    }
    node * temp = h->first;
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
    node * newnode =createnode(data);
    newnode->next=temp->next;
    temp->next=newnode;
    h->count++;
}
void deleteatbeginning(Header *h) {
    if (h == NULL || h->first == NULL) {
        printf("Nothing to delete\n");
        return;
    }

    node *temp = h->first;
    h->first = h->first->next;

    if (h->first == NULL) {
        h->last = NULL;
    }

    h->count--;

    free(temp);
}

void deleteatend(Header *h) {
    if (h == NULL || h->first == NULL) {
        printf("Nothing to delete\n");
        return;
    }

    node *temp = h->first;

    // If there is only one node
    if (h->first->next == NULL) {
        free(h->first);
        h->first = NULL;
        h->last = NULL;
        h->count--;
        return;
    }

    // Reach the second-last node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(h->last);
    h->last = temp;
    h->last->next = NULL;
    h->count--;
}





