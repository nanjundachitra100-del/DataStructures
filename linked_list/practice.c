void display(header * h){
 header*temp=h->first->next;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

void search(header *h, int data) {
if (h == NULL) {
return;
}

//searching an element 
if (h->first == NULL) {
    printf("List is empty\n");
    return;
}

node *temp = h->first;

while (temp != NULL) {
    if (temp->data == data) {
        printf("Element found\n");
        return;
    }

    temp = temp->next;
}

printf("Element not found\n");


}
//count
int countnodes(header *h) {
if (h == NULL) {
return 0;
}

int count = 0;
node *temp = h->first;

while (temp != NULL) {
    count++;
    temp = temp->next;
}

return count;


}
