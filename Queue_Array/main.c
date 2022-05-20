#include <stdio.h>
#include "queue_arr.h"
int main() {

    queue myQueue;
    myQueue.arr = NULL;
    myQueue.boyut =2;
    myQueue.sira =0;
    myQueue.sirabasi=0;


    for(int i =0 ; i<20;i++)
    {
        Enque(&myQueue,i*10);
    }
    printf(" boyut : %d  sira : %d  sirabasi : %d \n" ,myQueue.boyut, myQueue.sira,myQueue.sirabasi);
    for(int i =0; i<13;i++)
    {
        printf("%d -> ", deque(&myQueue));
    }
    tidy_up(&myQueue);
    printf(" \nboyut : %d  sira : %d  sirabasi : %d " ,myQueue.boyut, myQueue.sira,myQueue.sirabasi);
    for(int i =0 ; i<20;i++)
    {
        Enque(&myQueue,i*10);
    }
    printf(" \nboyut : %d  sira : %d  sirabasi : %d \n" ,myQueue.boyut, myQueue.sira,myQueue.sirabasi);
    for(int i =0; i<30;i++)
    {
        printf("%d -> ", deque(&myQueue));
    }
    printf(" \nboyut : %d  sira : %d  sirabasi : %d \n" ,myQueue.boyut, myQueue.sira,myQueue.sirabasi);
    return 0;
}
