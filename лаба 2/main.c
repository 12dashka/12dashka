#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p[8],i,s=0,k=0;
    float ser;
    printf("vvedit masiv");
    for(i=1;i<9;i++){
          scanf("%d", &p[i]);
          if((p[i]%2)==0){s=s+i,k++;}
    }
    ser=s/k;

    printf("%.1f",ser);
}
