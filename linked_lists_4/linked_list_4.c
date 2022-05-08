#include <stdio.h>
#include <stdlib.h>


// DAIRESEL BAGLI LISTELER (CYCLING LISTS)

typedef struct n{
    int data;
    struct n *next;   
}node_st;

typedef struct n node;

void bastir(node *r)
{
    node *iter = r;
    printf("%d ", iter->data);
    iter = iter->next;
    while(iter != r)
    {
        printf("%d ", iter->data);
        iter = iter->next;
    }
    printf("\n");
}

void ekle(node *r, int data)
{
    node *iter = r;
    while(iter->next != r)
    {
        iter = iter->next;
    }
    iter ->next = (node *)malloc(sizeof(node));
    iter ->next->data = data;
    iter->next->next =r;
}


node *ekleSirali(node *r, int data)
{
    if(r == NULL)
    {
        r = (node *)malloc(sizeof(node));
        r->data =data;
        r->next = r;
        return r;
    }

    if(r->data > data)
    {
        node *temp = (node *)malloc(sizeof(node));
        temp->data = data;
        temp->next = r;
        node *iter=r;
        while(iter->next != r){
            iter = iter ->next;
        }
        iter->next = temp;
        return temp;
    }

    node *iter =r;
    while(iter ->next !=r && iter->next->data < data)
    {
        iter = iter ->next;
    }
    node * temp = (node *) malloc(sizeof(node));
    temp->next = iter ->next;
    temp->data=data;
    iter->next = temp;
    return r;

}

node *sil(node *r, int data)
{
    node *temp;
    node *iter = r;

    if(r->data == data)
    {
        temp = r;
        while(iter->next != r)
        {
            iter = iter-> next;
        }
        iter->next = r->next;
        r = r->next;
        free(temp);
        return r;
    }

    while(iter->next !=r && iter->next->data != data)
    {
        iter = iter->next;
    }
    if(iter->next == r)
    {
        printf("sayi bulunamadi ");
        return r;
    }
    temp = iter->next;
    iter->next = iter->next->next;
    free(temp);
    return r;
}
int main()
{
    node *root;
    root=NULL;

    root = ekleSirali(root,400);
    root = ekleSirali(root,40);
    root = ekleSirali(root,4);
    root = ekleSirali(root,450);
    root = ekleSirali(root,50);
    ekle(root,600);
    bastir(root);

    root = sil(root,50);
    bastir(root);

    root = sil(root,999);
    bastir(root);

    root = sil(root,4);
    bastir(root);

    root = sil(root,450);
    bastir(root);

    

    return 0;
}