#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"

int *arr = NULL;
int size = 2;
int top = 0;

int pop()
{
    if(arr = NULL){
        printf("error");
        return -1;
    }

    if(top<=size/4)
    {
        int *arr2 = (int *)malloc(sizeof(int)*size/2);
        for(int j =0; j<size; j++)
        {
            arr2[j]=arr[j];
        }
        free(arr);
        arr = arr2;
        size /= 2;
    }
    return arr[--top];
}

void push(int x)
{
    if(arr = NULL)
    {
        arr = (int*) malloc(sizeof(int)*2);
    }
    if(top >= size)
    {
        int *arr2 = (int *)malloc(sizeof(int)*size*2);
        for(int j =0; j<size; j++)
        {
            arr2[j]=arr[j];
        }
        free(arr);
        arr = arr2;
        size *= 2;
    }
    arr[top++] = x;
}

void print()
{
    printf("\nsize : %d\n", size);
    for(int i=0; i<top;i++)
    {
        printf("%d ", arr[i]);
    }
}