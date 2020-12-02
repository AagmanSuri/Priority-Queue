#include<stdio.h>
#include<stdlib.h>

struct node
{
    int priority;
    int info;
    struct node *link;
}*front = NULL;

