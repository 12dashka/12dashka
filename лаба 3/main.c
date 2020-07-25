#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w[10][10],i,j;

    printf("vvedit masiv");
    for(i=1;i<8;i++){
            for(j=1;j<4;j++){
                 scanf("%d", &w[i][j]);  }}

  printf("\n masiv--------------------");
    for(i=1;i<8;i++){ printf("\n");
            for(j=1;j<4;j++){
                 printf("%d ", w[i][j]);  if(w[i][j]<0){w[i][j]=1;} else {if(w[i][j]>0){w[i][j]=0;}} }}



 printf("\n new masiv--------------------");
    for(i=1;i<8;i++){ printf("\n");
            for(j=1;j<4;j++){
                 printf("%d ", w[i][j]);  }}
}
