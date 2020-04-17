#ifndef HEADER_H
#define HEADER_H

#define DUZINA 8
#define SIRINA DUZINA*2

#define crna_boja_polja 177
#define bijela_boja_polja 178
#define crna_boja_figura 170
#define bijela_boja_figura 219

struct polje{
   char m[DUZINA][SIRINA];
};

void kopiraj(char *m, char str[16]){
   int i;
   for(i=0;i<16;i++){
      m[i] = str[i];
   }
}

struct polje polja[26];
struct polje *mat_pokazivaca[8][8] = {{&polja[8],&polja[3],&polja[10],&polja[5],&polja[12],&polja[4],&polja[9],&polja[2]},
                                          {&polja[1],&polja[7],&polja[1],&polja[7],&polja[1],&polja[7],&polja[1],&polja[7]},
                                          {&polja[25],&polja[0],&polja[25],&polja[0],&polja[25],&polja[0],&polja[25],&polja[0]},
                                          {&polja[0],&polja[25],&polja[0],&polja[25],&polja[0],&polja[25],&polja[0],&polja[25]},
                                          {&polja[25],&polja[0],&polja[25],&polja[0],&polja[25],&polja[0],&polja[25],&polja[0]},
                                          {&polja[0],&polja[25],&polja[0],&polja[25],&polja[0],&polja[25],&polja[0],&polja[25]},
                                          {&polja[19],&polja[13],&polja[19],&polja[13],&polja[19],&polja[13],&polja[19],&polja[13]},
                                          {&polja[14],&polja[21],&polja[16],&polja[23],&polja[18],&polja[22],&polja[17],&polja[20]}};

struct polje init_polja(struct polje *p, int tip_figure){
   int broj = tip_figure;
   int i, j;
   while(broj>6){
      broj -= 6;
   }
   switch(broj){
     case 0:
        kopiraj(p -> m[0], "0000000000000000");
        kopiraj(p -> m[1], "0000000000000000");
        kopiraj(p -> m[2], "0000000000000000");
        kopiraj(p -> m[3], "0000000000000000");
        kopiraj(p -> m[4], "0000000000000000");
        kopiraj(p -> m[5], "0000000000000000");
        kopiraj(p -> m[6], "0000000000000000");
        kopiraj(p -> m[7], "0000000000000000");
        break;
     case 1:
        kopiraj(p -> m[0], "0000000000000000");
        kopiraj(p -> m[1], "0000000000000000");
        kopiraj(p -> m[2], "0000000000000000");
        kopiraj(p -> m[3], "0000000110000000");
        kopiraj(p -> m[4], "0000011111100000");
        kopiraj(p -> m[5], "0000001111000000");
        kopiraj(p -> m[6], "0000111111110000");
        kopiraj(p -> m[7], "0000000000000000");
        break;
     case 2:
        kopiraj(p -> m[0], "0000000000000000");
        kopiraj(p -> m[1], "0000000000000000");
        kopiraj(p -> m[2], "0000111111110000");
        kopiraj(p -> m[3], "0000111111110000");
        kopiraj(p -> m[4], "0000011111100000");
        kopiraj(p -> m[5], "0000011111100000");
        kopiraj(p -> m[6], "0001111111111000");
        kopiraj(p -> m[7], "0000000000000000");
        break;
     case 3:
        kopiraj(p -> m[0], "0000000000000000");
        kopiraj(p -> m[1], "0000001111000000");
        kopiraj(p -> m[2], "0000111111111000");
        kopiraj(p -> m[3], "0001111100111000");
        kopiraj(p -> m[4], "0000111100000000");
        kopiraj(p -> m[5], "0000011100000000");
        kopiraj(p -> m[6], "0001111111111000");
        kopiraj(p -> m[7], "0000000000000000");
        break;
     case 4:
        kopiraj(p -> m[0], "0000000000000000");
        kopiraj(p -> m[1], "0000000000000000");
        kopiraj(p -> m[2], "0000000110000000");
        kopiraj(p -> m[3], "0000011111100000");
        kopiraj(p -> m[4], "0000001111000000");
        kopiraj(p -> m[5], "0000001111000000");
        kopiraj(p -> m[6], "0000111111110000");
        kopiraj(p -> m[7], "0000000000000000");
        break;
     case 5:
        kopiraj(p -> m[0], "0000000000000000");
        kopiraj(p -> m[1], "0000110110110000");
        kopiraj(p -> m[2], "0000111111110000");
        kopiraj(p -> m[3], "0000011111100000");
        kopiraj(p -> m[4], "0000001111000000");
        kopiraj(p -> m[5], "0000011111100000");
        kopiraj(p -> m[6], "0001111111111000");
        kopiraj(p -> m[7], "0000000000000000");
        break;
     case 6:
        kopiraj(p -> m[0], "0000000000000000");
        kopiraj(p -> m[1], "0000110110110000");
        kopiraj(p -> m[2], "0000111111110000");
        kopiraj(p -> m[3], "0000011111100000");
        kopiraj(p -> m[4], "0000001111000000");
        kopiraj(p -> m[5], "0001101111011000");
        kopiraj(p -> m[6], "0001111111111000");
        kopiraj(p -> m[7], "0000000000000000");
        break;
   }
   if(tip_figure == 25){
      for(i=0;i<DUZINA;i++){
         for(j=0;j<SIRINA;j++){
            p -> m[i][j] = bijela_boja_polja;
         }
      }
   }
   else{
   for(i=0;i<DUZINA;i++){
      for(j=0;j<SIRINA;j++){
         if(p -> m[i][j] == '1'){
            if(tip_figure >= 0 && tip_figure < 13){
               if(broj == 4 && i == 2) p -> m[i][j] = bijela_boja_figura;
               else p -> m[i][j] = crna_boja_figura;
            }
            else{
               if(broj == 4 && i == 2) p -> m[i][j] = crna_boja_figura;
               else p -> m[i][j] = bijela_boja_figura;
            }
         }
         else{
            if((tip_figure >= 0 && tip_figure <= 6) || (tip_figure >= 13 && tip_figure <= 18)){
               p -> m[i][j] = crna_boja_polja;
            }
            else{
               p -> m[i][j] = bijela_boja_polja;
            }
         }
      }
   }
   }
   return *p;
}

void ispis_polja(struct polje *p){
   int i, j;
   for(i=0;i<DUZINA;i++){
      for(j=0;j<SIRINA;j++){
         putchar(p -> m[i][j]);
      }
      putchar('\n');
   }
}

void tabla(){
   int i, j, k, l;
   for(i=0;i<8;i++){
      for(j=0;j<8;j++){
         for(k=0;k<8;k++){
            for(l=0;l<16;l++){
               putchar(mat_pokazivaca[i][k] -> m[j][l]);
            }
         }
         putchar('\n');
      }
   }
}

#endif // HEADER_H
