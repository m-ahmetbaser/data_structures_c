//
// Created by baser on 19/05/2022.
//
#include <stdlib.h>
#include <stdio.h>
#include "parametric_stack.h"




int pop(stack *s)
{
    if(s->arr == NULL){
        printf("error");
        return -1;
    }

    if(s->top <= s->size/4)
    {
        int *arr2 = (int *)malloc(sizeof(int)*(s->size)/2);
        int j;
        for(j =0; j<(s->top); j++)
        {
            arr2[j]=s->arr[j];
        }
        free(s->arr);
        s->arr = arr2;
        s->size /= 2;
    }
    return s->arr[--s->top];
}

void push(int x, stack *s)
{
    if(s->arr == NULL)
    {
        s->arr = (int*) malloc(sizeof(int)*2);
    }
    if(s->top >= s->size)
    {
        int *arr2 = (int *)malloc(sizeof(int)*(s->size)*2);
        int j;
        for(j =0; j<s->size; j++)
        {
            arr2[j]=s->arr[j];
        }
        int* temp = s->arr;
        s->arr = arr2;
        free(temp);
        s->size *= 2;
    }
    s->arr[s->top++] = x;
}

void print(stack *s)
{
    printf("\nsize : %d\n", s->size);
    int i;
    for(i=0; i<s->top;i++)
    {
        printf("%d ", s->arr[i]);
    }
}