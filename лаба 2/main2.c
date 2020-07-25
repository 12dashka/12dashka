#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8],b[8],i,j,s=0,k=0,l=1;

    printf("vvedit masiv");
    for(i=1;i<9;i++){
          scanf("%d", &a[i]);

    }
     printf("vvedit masiv");
    for(i=1;i<9;i++){
          scanf("%d", &b[i]);
}

     printf("\n masiv A------------------- \n");
    for(i=1;i<9;i++){
          printf("%d ", a[i]);}
     printf("\n masiv B------------------- \n");
    for(i=1;i<9;i++){
          printf("%d ", b[i]);}

     printf("\n povtor-------------------- \n");
    for(i=1;i<9;i++){
          if(a[i]==a[i+1]){} else {for(j=l;j<9;j++){ if(a[i]==b[j]){
            if(b[j]==b[j+1]){} else {if(a[i]==b[j]){printf("%d ",a[i]);k++;} l=j+1; j=9;}
          }}}

    }

    printf("\n kilkist povtor = %d",k);
}
