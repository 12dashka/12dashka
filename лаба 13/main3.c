#include <string.h>
#include <stdio.h>

int main (void)
{


   char str[50];
   int k=0, j=0,i,x=0,kk;


  printf ("print ");
  gets(str);

for (j=0;j<strlen(str);j++){
      if((str[j]==' ')||(str[j]==',')||(str[j]=='.')||(str[j]=='-')){kk=j;
        for(i=(j-k);i<(j-1)+1;i++){
            if(str[i]==str[kk-1]){kk--;}else{x++;kk--;}
        } if(x==0){for(i=(j-k);i<(j);i++){     printf("%c",str[i]);}x=0;k=0;printf(" ");

        } else {x=0;k=0;}
      } else {k++;}

      }

kk=j;
        for(i=(j-k);i<(j-1)+1;i++){
            if(str[i]==str[kk-1]){kk--;}else{x++;kk--;}
        } if(x==0){for(i=(j-k);i<(j);i++){     printf("%c",str[i]);}x=0;k=0;printf(" ");}


   return 0;}
