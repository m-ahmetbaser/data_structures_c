//
// Created by baser on 19/05/2022.
//
#include "stack_ll.h"

int pop(node_ *r)
{
    if(r == NULL)
    {
        printf("stack bos\n");
        return -1;
    }
    if(r->next == NULL)
    {
        int rValue = r->data;
        free(r);
        return rValue;
    }
    node_ *iter =r;
    while(iter->next->next != NULL)
    {
        iter = iter->next;
    }

    node_ *temp = iter->next;
    int rValue = temp->data;
    iter->next = NULL;
    free(temp);

    return rValue;


}
node_ *push(node_ *r, int x)
{
    if(r == NULL)
    {
        r = (node_ *) malloc(sizeof (node_));
        r->data=x;
        r->next =NULL;
        return r;
    }
    node_ *iter = r;
    while(iter->next != NULL)
    {
        iter = iter->next;
    }
    node_ *temp = (node_ *) malloc(sizeof(node_));
    temp->data = x;
    temp->next = NULL;
    iter->next = temp;
    return r;
}