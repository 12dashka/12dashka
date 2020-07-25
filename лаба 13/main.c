#include <string.h>
#include <stdio.h>

int main (void)
{

   FILE *mf;
char st[100];
   int str[50];
   int a,b,x,z,l,n,k=0, j=0;
     printf ("a= ");
scanf("%d",&a);
  printf ("b= ");
scanf("%d",&b);
char estr;

   printf ("open \n");
   mf = fopen ("222.txt","r");

   if (mf == NULL) {printf ("error\n"); return -1;}
estr = fgets (st,sizeof(st),mf); n=strlen(st)/2;
fclose (mf);  mf = fopen ("222.txt","r");
   while (1)
   {

      fscanf(mf,"%d",&str[j]);

      if (j == n)
      {
          n=j;
        break;
      }
j++;



      }

for (j=0;j<n;j++){
    if((str[j])==a){x=j;break;}}
    for (j=x;j<n;j++){
    if((str[j])==b){z=j;break;}}
    for (j=x+1;j<z;j++){
    printf("%d ",str[j]);k++;}
printf("\n kilkist= %d ",k);

fclose (mf);  mf = fopen ("222.txt","a+");
     fprintf(mf," %d ",k);

   printf ("\nclosed ");
   if ( fclose (mf) == EOF) printf ("error\n");


   return 0;}
