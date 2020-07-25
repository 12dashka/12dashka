#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{int n,m;
 printf("vvedit n");
scanf("%d", &n);
printf("vvedit m");
scanf("%d", &m);
    int a[n][m],i,j,k=0;
    float ser,s=1;

    printf("vvedit masiv");
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                 scanf("%d", &a[i][j]); s=s*a[i][j];k++;}}

ser=pow(s,1.0/k);
    printf("\n seredne = %.3f",ser);
}

