//
// Created by baser on 21/05/2022.
//

#include "bst.h"


// özyinelemeli recursive fonksiyon yapısı kullanılmıştır


node *ekle(node *agac, int x)  // insertion
{
    if(agac == NULL)
    {
        node *root = ( node *) malloc(sizeof(node));
        root -> sol = NULL;
        root -> sag = NULL;
        root -> data = x;
        return root;
    }

    if(agac -> data < x)
    {
        agac -> sag = ekle(agac->sag, x);
        return agac;
    }
    agac->sol = ekle(agac->sol, x);
    return agac;
}

void dolas(node *agac)  // traversal - algoritma LNR a göre yazılmıstır
{
    if(agac == NULL)
        return;
    dolas(agac->sol);
    printf("%d ",agac->data);
    dolas(agac->sag);
}

int bul(node *agac, int aranan)
{
    if(agac == NULL)
        return -1;
    if(agac -> data == aranan )
        return 1;
    if(bul(agac->sol,aranan) == 1)
        return  1;
    if(bul(agac->sag,aranan) == 1)
        return  1;
    return  -1;
}

int max (node *agac)
{
    while(agac->sag != NULL)
    {
        agac = agac->sag;
    }
    return agac->data;
}

int min (node *agac)
{
    while(agac->sol != NULL)
    {
        agac = agac->sol;
    }
    return agac->data;
}

node *sil(node *agac, int silinen)
{
    if(agac == NULL)
        return 0;
    if(agac-> data == silinen) {
        if (agac->sol == NULL && agac->sag == NULL)
            return NULL;
        if (agac->sag != NULL) {
            agac->data = min(agac->sag);
            agac->sag = sil(agac->sag, min(agac->sag));
            return agac;
        }
        agac->data = max(agac->sol);
        agac->sol = sil(agac->sol, max(agac->sol));
        return agac;
    }
    if(agac->data < silinen)
    {
        agac->sag = sil(agac->sag,silinen);
        return agac;
    }
    if(agac->data > silinen)
    {
        agac->sol = sil(agac->sol,silinen);
        return agac;
    }


}