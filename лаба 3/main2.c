#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w[10][10],a[100],i,j,max=-999,g=0,n;


    for(i=1;i<8;i++){
            for(j=1;j<4;j++){
                 w[i][j]=rand()%100-50;  }}

  printf("\n masiv--------------------");
    for(i=1;i<8;i++){ printf("\n");
            for(j=1;j<4;j++){
                 printf("%d ", w[i][j]);   }}



    for(i=1;i<8;i++){ if((i%2)==0){
            for(j=1;j<4;j++){
                 if(((w[i][j])<0)&&(w[i][j]>max)){max=w[i][j];}   }a[g]=max; max=-999;g++;}}
n=g;
 printf("\n new masiv-------------------- \n");
    for(g=0;g<n;g++){ printf("%d ", a[g]);  }
}
