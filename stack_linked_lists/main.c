#include <stdio.h>
#include "stack_ll.h"

int main() {

    node_ *s =NULL;
    s= push(s, 10);
    s= push(s, 20);
    printf("%d -> ", pop(s));
    s= push(s,30);
    printf("%d -> ", pop(s));
    printf("%d -> ", pop(s));


    return 0;
}
