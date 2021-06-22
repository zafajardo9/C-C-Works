//single linked list
//Doubly linked list
//circular linked list
#include <stdio.h>
#include <conio.h>


// struct IntListItem {
//     int value;
//     struct IntListItem* next;
// };
// typedef struct IntListItem IntListItem;

struct Node {
    int data;
    struct Node* next;
};


int main() {


    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
 
    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));


    head->data = 1; // assign data in first node
    head->next = second; // Link first node with

    // assign data to second node
    second->data = 2;
 
    // Link second node with the third node
    second->next = third;

    third->data = 3; // assign data to third node
    third->next = NULL;


    return  0;
}
