#include <stdio.h>
	#include <stdlib.h>
	
	struct node {
	    int data;
	    struct node *next;
	};
	
	struct node *head = NULL, *newnode, *temp;
	
	int main() {
	
	    newnode = (struct node *)malloc(sizeof(struct node));
	
	    printf("Enter the data: ");
	    scanf("%d", &newnode->data);
	
	    newnode->next = NULL;
	
	    if(head == NULL) {
	        head = newnode;
	        temp = newnode;
	    }
	
	    printf("Data = %d", head->data);
	
	    return 0;
	}
