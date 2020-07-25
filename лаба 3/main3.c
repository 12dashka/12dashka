#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z[10][10],i,j,s=0,n,max=-999;


    for(i=1;i<6;i++){
            for(j=1;j<6;j++){
                 z[i][j]=rand()%100-50;  }}

  printf("\n masiv--------------------");
    for(i=1;i<6;i++){ printf("\n");
            for(j=1;j<6;j++){
                 printf("%d ", z[i][j]);   }}



    for(i=1;i<6;i++){
            for(j=i;j<6;j++){ s=s+abs(z[i][j]);
                  }if(s>max){max=s;n=i;}s=0;}

 printf("\n -------------------- \n");
   printf("sum=%d nomer=%d",max,n);
}
