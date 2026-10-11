struct node *deleteatbeginning(struct node * head){
  if(head==NULL){
    return NULL;
  }
  struct node * temp=head;
  head = head->next;
  free(temp);
  temp=NULL;
  return head;
}
struct node *deleteatend(struct node * head){
  if(head==NULL){
    return NULL;
  }
  if(head->next==NULL){
    free(head);
    return NULL;
  }
  struct node * temp =head;
  while (temp->next->next!=0){
    temp=temp->next;
    free(temp->next);
    temp->next=NULL;
    return head;
  }
}
  