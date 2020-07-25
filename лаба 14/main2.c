#include <string.h>
#include <stdio.h>

int main (void)
{

   FILE *mf;
 FILE *mff;

   int k=0, j,i,min=99,kk;
   char s[100] ;



   mf = fopen ("2.txt","r");
    mff = fopen ("3.txt","a+");
    while(1){
if(NULL!= fgets(s,100,mf)){ for(i=0;i<strlen(s);i++){
    if(s[i]==' '){if(k<min){min=k;j=i-k;kk=k;k=0;} else {k=0;}} else {k++;}
} k=k-1;if(k<min){min=k;j=i-k-1;kk=k;} for(i=j; i<j+kk+1;i++){  fprintf(mff,"%c",s[i]);
} fprintf(mff,"%c",'\n');
k=0;min=99;
} else{break;}
    }

printf ("done \n");

   return 0;}
