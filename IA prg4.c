Problem Statement: Simple Book Details System
Define a structure to store information about a book:

typedef struct {
    int id;
    char title[30];
    float price;
} Book;
Write a C program that:
1.Dynamically allocates an array of n books and reads their details.
Finds and prints the details of the most expensive book in the collection.

------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

typedef struct Boook{
    int id;
    char name[100];
    float price;
}Book;

void readBook(Book*b,int n){
    printf("Book detaile:\n");
    for(int i=0;i<n;i++){
        printf("Enter the book %d deatils \n",i+1);
        printf("Enter the id\n");
        scanf("%d",&b[i].id);
        printf("Enter the book name:\n");
        scanf("%s",b[i].name);
        printf("Enter the book price:\n");
        scanf("%f",&b[i].price);

    }

}
 int findexpensiveBook(Book * b,int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(b[i].price>b[max].price){
            max=i;
        }
    }
    return max;
 }

 void displayBook(Book b) {
    printf("\nMost Expensive Book:\n");
    printf("ID: %d\n", b.id);
    printf("Name: %s\n", b.name);
    printf("Price: %.2f\n", b.price);
}

 int main(){
    int n;
    printf("Enter the number of books:\n");
    scanf("%d",&n);
    
    if(n<=0){
        printf("Invalid number of books:\n");
        return 1;
    }
    Book * b=(Book*)malloc(n*sizeof(Book));
    if(b==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    readBook(b,n);
    int index=findexpensiveBook(b,n);
    displayBook(b[index]);
    free(b);
    b=NULL;

    return 0;
 }
