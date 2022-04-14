#include <stdio.h>
#include <stdlib.h>


// bu calismada program listeye sirali olarak eleman ekler
// hic eleman yoksa, eleman varsa ve olan elemandan kücük bir eleman ekleniyorsa durumlarini kontrol eder
// bunlarin haricinde eklenen sayiyi buyukluk derecesine gore listeye ekler 
// en buyukse en sona orta buyuklukteyse araya gibi



typedef struct n
{
    int data;
    struct n* next; 
};

typedef struct n node;

void bastir(node *r)
{
    while(r != NULL)
    {
        printf("%d ", r->data);
        r=r->next;
    }
}

node * ekle(node *r, int data)
{

    if(r==NULL) // hic eleman yoksa bir eleman eklenir
    {
        r = (node*)malloc(sizeof(node));
        r->data = data;
        r->next=NULL;

        return r;
    }

    if(r->data > data) // eklenmek istenen eleman 1 tane olan elemandan kucukse 
    {
        node * tempLow;
        tempLow = (node*)malloc(sizeof(node));
        tempLow -> next = r;
        tempLow ->data =data;
        
        return tempLow;
    }
    // eklenmek istenen eleman en buyukse en sona ekler aksi halde kendinden bir buyugunu gordugu yere kadar ekler
    // bunun icin iter kullanilmasi gerekir
    node *iter = r;
    while(iter->next != NULL && iter->next->data < data)
    {
        iter = iter->next;
    }
    node * temp = (node *)malloc(sizeof(node));   
    temp->next = iter->next;
    iter->next = temp;
    temp->data = data;

    return r;


    
}


int main()
{
    int sayi;

    node * root;
    root =NULL;

    root = ekle(root,100);
    root = ekle(root,75);
    root = ekle(root,35);
    root = ekle(root,200);
    root = ekle(root,101);
    root = ekle(root,99);

    bastir(root);

    return 0;   
}