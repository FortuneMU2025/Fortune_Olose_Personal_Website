#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  

struct Node
{
    int data;
    struct Node *next;
};

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};