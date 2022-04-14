#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct n{
    int data;
    struct n *next;
}node_st;

typedef struct n node;
void bastir(node *root)
{
    int i=0;
    while(root ->next != NULL)
    {
        printf("%d - %d\n",i,root->data);
        root = root->next;       
        i++;
        
    }
}
int main()
{
    node *root;
    root = (node *)malloc(sizeof(node));
    root ->data = 10;
    root->next = (node *)malloc(sizeof(node));
    root -> next ->data = 20;
    root -> next ->next = (node *) malloc(sizeof(node));
    root -> next -> next -> data =30;

    node *iterator;

    iterator = root;
    // these printf functions print same value
    printf("%d\n",root->data);
    printf("%d\n\n",iterator->data);
    
    iterator = root ->next;
    // these printf functions print same value
    printf("%d\n", root -> next ->data);
    printf("%d\n\n",iterator -> data);

    iterator = iterator ->next;
    // these printf functions print same value
    printf("%d\n",root ->next ->next ->data);
    printf("%d\n",iterator -> data);

    root -> next ->next -> next = NULL;
    uint8_t i =0;
    iterator = root;


    // create linked list with loops
    for(i=0; i<5;i++)
    {
        iterator->next = (node *)malloc(sizeof(node));
        iterator = iterator->next;
        iterator->data = i*10;
        iterator -> next = NULL;
    }
    printf("fonksiyon cikktisi :\n");

    bastir(root);
    printf("\n");
    
    return 0;
}