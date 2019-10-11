#include <stdio.h>
#include "header.h"

int main(){

int vrij;

printf("0 - crno polje  25 - bijelo polje\n");
printf("1 - crni pijun na crnom polju     7 - crni pijun na bijelom polju      13 - bijeli pijun na crnom polju     19 - bijeli pijun na bijelom polju\n");
printf("2 - crni top na crnom polju       8 - crni top na bijelom polju        14 - bijeli top na crnom polju       20 - bijeli top na bijelom polju\n");
printf("3 - crni konj na crnom polju      9 - crni konj na bijelom polju       15 - bijeli konj na crnom polju      21 - bijeli konj na bijelom polju\n");
printf("4 - crni lovac na crnom polju     10 - crni lovac na bijelom polju     16 - bijeli lovac na crnom polju     22 - bijeli lovac na bijelom polju\n");
printf("5 - crna kraljica na crnom polju  11 - crna kraljica na bijelom polju  17 - bijela kraljica na crnom polju  23 - bijela kraljica na bijelom polju\n");
printf("6 - crni kralj na crnom polju     12 - crni kralj na bijelom polju     18 - bijeli kralj na crnom polju     24 - bijeli kralj na bijelom polju\n\n");

scanf("%d",&vrij);
struct polje p = init_polja(&p, vrij);
ispis_polja(&p);

return 0;
}
