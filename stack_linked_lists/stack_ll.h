//
// Created by baser on 19/05/2022.
//

#ifndef STACK_LINKED_LISTS_STACK_LL_H
#define STACK_LINKED_LISTS_STACK_LL_H

#include "stdlib.h"
#include "stdio.h"


struct Node
{
    struct Node *next;
    int data;
};
typedef struct Node node_;

int pop(node_ *r);
node_ *push(node_ *r,int x);


#endif //STACK_LINKED_LISTS_STACK_LL_H
