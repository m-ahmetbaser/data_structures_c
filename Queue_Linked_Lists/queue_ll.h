//
// Created by baser on 21/05/2022.
//

#ifndef QUEUE_LINKED_LISTS_QUEUE_LL_H
#define QUEUE_LINKED_LISTS_QUEUE_LL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;



int deque();
void enque(int x);

#endif //QUEUE_LINKED_LISTS_QUEUE_LL_H
