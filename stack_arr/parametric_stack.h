//
// Created by baser on 19/05/2022.
//

#ifndef STACK_ARR_PARAMETRIC_STACK_H
#define STACK_ARR_PARAMETRIC_STACK_H

#include <stdio.h>
#include <stdlib.h>



typedef struct
{
    int size;
    int top;
    int *arr;

}stack;

int pop(stack *s);
void push(int x, stack *s);
void print(stack *s);


#endif //STACK_ARR_PARAMETRIC_STACK_H
