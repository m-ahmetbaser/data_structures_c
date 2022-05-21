//
// Created by baser on 21/05/2022.
//

#ifndef BINARY_SEARCH_TREE_BST_H
#define BINARY_SEARCH_TREE_BST_H


#include <stdio.h>
#include "stdlib.h"


typedef struct
{
    int data;
    struct n *sol;
    struct n *sag;
}node;



node *ekle(node *agac, int x);
void dolas(node *agac);
int bul(node *agac, int aranan);
int max (node *agac);
int min (node *agac);
node *sil(node *agac, int silinen);





#endif //BINARY_SEARCH_TREE_BST_H
