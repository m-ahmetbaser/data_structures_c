

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
