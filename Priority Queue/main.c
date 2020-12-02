#include<stdio.h>
#include<stdlib.h>

struct node
{
    int priority;
    int info;
    struct node *link;
}*front = NULL;

int flag=0,i;

void insert(int item, int item_priority)
{
    struct node *tmp,*p;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = item;
    tmp->priority = item_priority;

    if(front==NULL || item_priority < front->priority)
    {
        tmp->link = front;
        front = tmp;
    }
    else
    {
        p = front;
        while( p->link!=NULL && p->link->priority <= item_priority)
        {
            p = p->link;
        }
        tmp->link = p->link;
        p->link = tmp;
    }
}
