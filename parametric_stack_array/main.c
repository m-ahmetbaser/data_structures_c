#include <stdio.h>
#include <stdlib.h>
#include "parametric_stack_arr.h"


// bu projede birden fazla stack olusturup o stack e pop ve push islemleri yapabilme ozgurlugu taninmistir




int main()
{
    
    stack s1;
    stack s2;  
    s1.size = 2;
    s1.arr = NULL;
    s1.top =0;

    s2.size = 2;
    s2.arr = NULL;
    s2.top =0;
	
	int i;
    for(i=1; i<=5; i++)
    {   
        push(i*10, &s1);
    }

    print(&s1);

	int j;
    for(j=1; j<=10; j++)
    {   
        push(pop(&s1), &s2);
    }
   

    print(&s2);

    return 0;
}
