#include <string.h>
#include <stdio.h>

int main (void)
{

   FILE *mf;
 FILE *mff;

   int k=0, j,i,min=99,kk;
   char s[100] ;



   mf = fopen ("222.txt","r");
    while(1){
if(NULL!= fgets(s,100,mf)){ for(i=0;i<strlen(s);i++){kk=s[i];
    if((kk>47)&&(kk<58)){printf("%c ",s[i]);}
} printf("\n");

} else{break;}
    }



   return 0;}
