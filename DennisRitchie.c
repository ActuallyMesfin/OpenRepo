#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *first = NULL;   
struct Node *tail = NULL;

one = malloc(sizeof(struct Node));
