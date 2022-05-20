//
// Created by baser on 20/05/2022.
//

#ifndef QUEUE_ARRAY_QUEUE_ARR_H
#define QUEUE_ARRAY_QUEUE_ARR_H


#include "stdio.h"
#include "stdlib.h"

typedef struct {
    int *arr;
    int boyut;
    int sirabasi;
    int sira ;
}queue;



void Enque(queue *que ,int a);
void tidy_up(queue *que);
int deque(queue *que);


#endif //QUEUE_ARRAY_QUEUE_ARR_H
