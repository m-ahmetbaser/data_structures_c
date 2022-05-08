#include <stdlib.h>
#include <stdio.h>

typedef struct n{
    int data;
    struct n * next;
};

typedef struct n node;
void ekle(node *r, int data)
{
    while(r->next != NULL)
    {
        r = r->next;
    }
    r ->next = (node *)malloc(sizeof(node));  
    r ->next -> data = data;  
    r->next->next = NULL;
    
}
void bastir(node *r)
{
    while(r != NULL)
    {
        printf("%d ", r->data);
        r=r->next;
    }
}
int main()
{
    node *root;
    
    root = (node *) malloc(sizeof(node));
    root ->next = NULL;

    root ->data = 500;
    int i = 0;
    for(i =0; i<5;i++)
    {
        ekle(root,i*10);
    }
    
    bastir(root);


    // BAĞLI LİSTEDE ARAYA ELEMAN EKLEME 

    // yukarida cagrilan bastir() fonk sonrasi 
    // 500 0 10 20 30 40 sayilari konsola bastirilir
    // asagida yapilan islemler ile  20 ile 30 arasina eleman eklenir

    node *iter = root;
    for(i=0;i<3;i++)
    {
        iter = iter ->next;
    }
    // temp yeni olusturulan alanı ifade eder
    node *temp = (node *) malloc(sizeof(node));
    temp->next = iter->next;
    iter->next = temp;
    temp->data = 25;
    bastir(root);


    

    return 0;
}