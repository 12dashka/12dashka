#include <string.h>
#include <stdio.h>

int main (void)
{

   FILE *mf;

   char str[50],p;
   int k=0, j=0,i,x=0,kk;
   char *estr;
p=' ';

   printf ("open \n");
   mf = fopen ("2.txt","r");

   if (mf == NULL) {printf ("error\n"); return -1;}

   while (1)
   {

      estr = fgets (str,sizeof(str),mf);

      if (estr == NULL)
      {
        break;
      }


   }
   fclose (mf);   mf = fopen ("3.txt","w");

for (j=0;j<strlen(str);j++){
      if((str[j]==' ')||(str[j]==',')||(str[j]=='.')||(str[j]=='-')){kk=j;
        for(i=(j-k);i<(j-1)+1;i++){
            if(str[i]==str[kk-1]){kk--;}else{x++;kk--;}
        } if(x==0){for(i=(j-k);i<(j);i++){     fprintf(mf,"%c",str[i]);}x=0;k=0;fprintf(mf," %c ",p);

        } else {x=0;k=0;}
      } else {k++;}

      }
kk=j;
        for(i=(j-k);i<(j-1)+1;i++){
            if(str[i]==str[kk-1]){kk--;}else{x++;kk--;}
        } if(x==0){for(i=(j-k);i<(j);i++){     fprintf(mf,"%c",str[i]);}x=0;k=0;fprintf(mf," %c ",p);

        }
   printf ("\nclosed ");
   if ( fclose (mf) == EOF) printf ("error\n");


   return 0;}
