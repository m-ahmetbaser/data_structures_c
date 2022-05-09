#include <stdlib.h>
#include <stdio.h>
#include "lib.h"

void bastir(node *r)
{
    
    while(r != NULL)
    {
        printf("%d ", r->data);
        r = r->next;
    }
    printf("\n");
}


node * ekleSirali(node *r, int data)
{

    if(r==NULL) // hic eleman yoksa bir eleman eklenir
    {
        r = (node*)malloc(sizeof(node));
        r->data = data;
        r->next=NULL;
        r->prev = NULL;

        return r;
    }

    if(r->data > data) // eklenmek istenen eleman rootun tuttugu elemandan kucukse, root degisir
    {
        node * temp;
        temp = (node*)malloc(sizeof(node));
        temp ->data =data;
        temp->prev = NULL;
        temp -> next = r;
        r->prev = temp;
        
        
        return temp;
    }
    // eklenmek istenen eleman en buyukse en sona ekler aksi halde kendinden bir buyugunu gordugu yere kadar iter hareket eder ve oraya ekler
    // bunun icin iter kullanilmasi gerekir
    //ayni zamanda doubly linked list te geri dönme sansimiz oldugu icin iter ->  next inin durumunu kontrol etmemize gerek kalmaz istedigimiz yerde durabiliriz
    node *iter = r;
    while(iter->next != NULL && iter->next->data < data)
    {
        iter = iter->next;
    }
    node * temp = (node *)malloc(sizeof(node));   
    temp->next = iter->next;
    iter->next = temp;
    temp->data = data;
    temp->prev = iter;
    if(temp->next !=NULL)
    {
        temp->next->prev = temp;
    }
    

    return r;   
}



node * sil(node *r, int x)
{
    node *temp;
    node *iter;
    iter =r;
    if(r->data == x)
    {
        temp = r;
        r = r ->next;
        free(temp);
        return r;
    }
    while((iter->next != NULL) && (iter->next->data != x))
    {
        iter = iter->next;
    }
    if(iter->next == NULL)
    {
        printf("sayi bulunamadi ");
        return r;
    }
    temp = iter->next;
    iter->next = iter->next->next;
    free(temp);

    if(iter->next !=NULL)
    {
        iter->next->prev = iter;
    }
    
    
    
    return r;

}
