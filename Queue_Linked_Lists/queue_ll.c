//
// Created by baser on 21/05/2022.
//
#include "queue_ll.h"

node *root = NULL;
node *son = NULL;

void enque(int x)
{
    if(root == NULL)
    {
        root = (node *) malloc(sizeof(node));
        root->data = x;
        root->next = NULL;
        son = root;
    }
    else{
        son ->next = (node *) malloc(sizeof(node));
        son ->next->data = x;
        son = son->next;
        son->next = NULL;
    }

}

int deque()
{
    if(root == NULL)
    {
        printf("linked list bos ");
        return -1;
    }
    int rVal = root->data;
    node *temp = root;
    root = root->next;
    free(temp);

    return rVal;

}