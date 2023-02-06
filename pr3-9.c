// this is sedgewick's implementation of the Josephus problem
// with N people and the Mth killing being given as arguments
#include<stdio.h>
#include<stdlib.h>

typedef struct node* link;
struct node {
    int item;
    link next;
};

int main(int argc, char *argv[]) 
{
    int i, N = atoi(argv[1]), M = atoi(argv[2]); // do some usage checks
    link t = malloc(sizeof *t), x = t; // do memory check
    t->item = 1; t->next = t; // creates 1 node circular list
    for (i = 2; i <= N; i++) {
        x = (x->next = malloc(sizeof(*x)));
        x->item = i; x->next = t;
    }
    while (x != x->next) {
        for (i = 1; i < M; i++) x = x->next;
        x->next = x->next->next; N--;
    }
    printf("%d\n", x->item);

    

    return 0;
}
