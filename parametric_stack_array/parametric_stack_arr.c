#include <stdio.h>
#include <stdlib.h>
#include "parametric_stack_arr.h"

int *arr = NULL;
int size = 2;
int top = 0;

extern stack s1;
extern stack s2;

int pop(stack *s)
{
    if(s->arr = NULL){
        printf("error");
        return -1;
    }

    if(s->top <= s->size/4)
    {
        int *arr2 = (int *)malloc(sizeof(int)*(s->size)/2);
        for(int j =0; j<(s->size); j++)
        {
            arr2[j]=s->arr[j];
        }
        free(s->arr);
        s->arr = arr2;
        s->size /= 2;
    }
    return s->arr[--top];
}

void push(int x, stack *s)
{
    if(s->arr = NULL)
    {
        arr = (int*) malloc(sizeof(int)*2);
    }
    if(s->top >= s->size)
    {
        int *arr2 = (int *)malloc(sizeof(int)*(s->size)*2);
        for(int j =0; j<size; j++)
        {
            arr2[j]=s->arr[j];
        }
        free(s->arr);
        s->arr = arr2;
        s->size *= 2;
    }
    s->arr[top++] = x;
}

void print(stack *s)
{
    printf("\nsize : %d\n", s->size);
    for(int i=0; i<s->top;i++)
    {
        printf("%d ", s->arr[i]);
    }
}