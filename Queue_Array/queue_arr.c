//
// Created by baser on 20/05/2022.
//

#include "queue_arr.h"





int deque(queue *que)
{
    if(que->sira == que->sirabasi)
    {
        printf("sira bos");
        return -1;
    }
    if(que->sira - que->sirabasi <= que->boyut/4)
    {
        int *dizi3 = (int *) malloc(sizeof(int)*que->boyut/2);
        for(int i=0; i<que->sira-que->sirabasi;i++)
        {
            dizi3[i] = que->arr[que->sirabasi+i];
        }
        que->sira = que->sira - que->sirabasi;
        que->sirabasi = 0;
        free(que->arr);
        que->boyut = que->boyut/2;
        que->arr = dizi3;
    }

    return que->arr[que->sirabasi++];
}
void tidy_up(queue *que)
{
    if(que->sirabasi == 0)
        return ;
    for(int i=0; i< que->boyut ;i++)
    {
        que->arr[i] = que->arr[i+que->sirabasi];
    }
    que->sira = que->sira - que->sirabasi;
    que->sirabasi = 0;
}
void Enque(queue *que ,int a)
{
    if(que->arr ==  NULL)
    {
        que->arr = (int *) malloc(sizeof (int)*2);
    }
    if(que->sira >= que->boyut)
    {
        int *dizi2 = (int *) malloc(sizeof(int)*que->boyut*2);
        for(int i =0; i<que->boyut;i++)
        {
            dizi2[i]=que->arr[i];
        }
        free(que->arr);
        que->arr = dizi2;
        que->boyut *= 2;
    }
    que->arr[que->sira++] = a;
}