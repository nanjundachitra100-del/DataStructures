#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

typedef struct header{
    node*first;
    node*last;
    int count;
}header;

void initheader(header * h);
node * createnode(int data);
void insertatbeginning(header * h,int data);
void insertatend(header * h,int data);
void insertatposition(header * h,int data,int position);
void deleteatbeginning(header * h);
void deleteatend(header * h);
void display(header * h);

void initheader(header * h){
    h->first=NULL;
    h->last=NULL;
    h->count=0;
}
node * createnode(int data){
    node * newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void insertatbeginning(header * h,int data){
    if(h==NULL){
        return ;
    }
    node * newnode = createnode(data);
    if(h->last==NULL){
        h->first=newnode;
        h->last=newnode;
    } else {
        newnode->next=h->first;
        h->first=newnode;
    }
    h->count++;
}
void insertatend(header *h, int data) {
if (h == NULL) {
return;
}

node *newnode = createnode(data);

if (newnode == NULL) {
    return;
}

if (h->last == NULL) {
    h->first = newnode;
    h->last = newnode;
} else {
    h->last->next = newnode;
    h->last = newnode;
}

h->count++;

}

void insertatposition(header * h,int data, int position){
    if(h==NULL){
        return;
    }
    if(position<1){
        printf("invalid position\n");
        return;
    }
    if(position>h->count+1){
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
node * temp=h->first;
for(int i=1;i<position-1;i++){
    temp=temp->next;
}
node * newnode=createnode(data);
newnode->next=temp->next;
temp->next=newnode;
}
void deleteatbeginning(header *h) {
if (h == NULL) {
return;
}

if (h->first == NULL) {
    printf("Nothing to delete\n");
    return;
}

node *temp = h->first;

if (h->first == h->last) {
    h->first = NULL;
    h->last = NULL;
} else {
    h->first = h->first->next;
}

free(temp);
h->count--;

}

void deleteatend(header * h){
    if(h==NULL){
        return;
    }
    if(h->first==NULL){
        printf("Nothing to delete\n");
        return;
    }
    if(h->first==h->last){
        free(h->first);
        h->first=NULL;
        h->last=NULL;
        h->count=0;
        return;
    }
    node * temp=h->first;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    h->count--;
}
void display(header * h){
    node * temp=h->first->next;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}