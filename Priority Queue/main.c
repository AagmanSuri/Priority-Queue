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
void create(int n)
{
    if(flag == 1)
    {
        printf("\nYou have already created a Linked list.\n");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            int item, item_priority;
            printf("\nEnter the item to be added in the Queue: ");
            scanf("%d",&item);
            printf("Enter its priority: ");
            scanf("%d",&item_priority);
            insert(item, item_priority);
        }
    }
}

