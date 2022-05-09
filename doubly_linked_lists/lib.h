#ifndef lib
#define lib

#include <stdlib.h>
#include <stdio.h>

typedef struct n
{
    int data;
    struct n *next;
    struct n *prev;
}node_st;

typedef struct n node;

void bastir(node *r);
node * ekleSirali(node *r, int data);
node * sil(node *r, int x);

#endif