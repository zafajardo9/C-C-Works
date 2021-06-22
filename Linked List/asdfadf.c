
#include <stdio.h>
#include <stdlib.h>



struct node {
    int x;
    struct node* next;
};

struct node *a, *b, *c;
int main() {
    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *) malloc(sizeof(struct node));
    c = (struct node *) malloc(sizeof(struct node));


    a->x = 123;
    b->x = 234;
    c->x = 345;

    a->next = b;
    b->next = c;
    c->next = a;

    a->x = c->next->x;

    b = a->next;
    c->x = b->next->x;

    printf("%5d%5d%5d", a->x, b->x, c->x);
    return  0;
}
