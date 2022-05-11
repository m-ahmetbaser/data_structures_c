#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"



int main()
{
    
    

    for(int i=1; i<=5; i++)
    {   
        push(i*10);
    }

    print();

    for(int i=0; i<5;i++)
    {
        printf("\npopped  %d ", pop());
    }

    for(int i=1; i<=10; i++)
    {   
        push(i*10);
    }
   

    print();

    return 0;
}