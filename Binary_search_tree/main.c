
#include "bst.h"
int main() {


    node *agac =NULL;
    agac = ekle(agac,12);
    agac = ekle(agac,200);
    agac = ekle(agac,190);
    agac = ekle(agac,213);
    agac = ekle(agac,56);
    agac = ekle(agac,24);
    agac = ekle(agac,18);
    agac = ekle(agac,27);
    agac = ekle(agac,28);
    dolas(agac);
    printf("\narama sonucu : %d",bul(agac,100));
    printf("\narama sonucu : %d",bul(agac,24));
    printf("\nmax : %d" , max(agac));
    printf("\nmin : %d\n" , min(agac));
    agac = sil(agac , 190);
    dolas(agac);





    return 0;
}
