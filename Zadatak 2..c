#include <stdio.h>
#include "header.h"

int main(){

int i;
for(i=0;i<26;i++){
   polja[i] = init_polja(&polja[i], i);
}

tabla();

return 0;
}
