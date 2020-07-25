#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {
char c[64],v[64];

}g;




int main(void) {
g *inf;
	int A[100][100];
	int S[100],f;
	int i,j,n,k;
printf("vvedit n");
scanf("%d", &n);
inf = (g *) calloc (n,sizeof(g));
printf("vvedit k");
scanf("%d", &k);
	  for (i = 0; i<k; i++)
  {
    for (j = 0; j<n; j++)
    {

      A[i][j] = rand()%180;
    }
  }
 for (i=0; i<k; i++){
        printf("country ");
        fflush(stdin);
        gets(inf[i].c);}
 for (i=0; i<n; i++){
        printf("name ");
        fflush(stdin);
        gets(inf[i].v);}
printf("\t \t");
  for(i=0;i<n+1;i++){
  	printf("\t%s",inf[i].v);
  }
  printf("\n");
  for (i = 0; i<k; i++)
  {printf("\t%s     ",inf[i].c);
    for (j = 0; j<n; j++)
    {
      printf("\t  %d", A[i][j]);
    }
    printf("\n");
  }

  int max=0;
  int min=999;
  int s,d,x,z;
  for (i = 4; i<5; i++)
  {
    for (j = 0; j<n; j++)
    {
    if ( A[i][j]>max) {max=A[i][j]; s=j+1;x=i;}
    if (A[i][j]<min) {min=A[i][j]; d=j+1;z=i;}
    }
  }
printf("max = %d  Candidate - %s country - %s",max,inf[s].v,inf[x].c);
printf("\nmin = %d  Candidate - %s country - %s",min,inf[d].v,inf[z].c);

printf("\n");
for (f=0;f<2;f++){
	S[0]=max;
	S[1]=min;
}

printf("Array : ");
for (f=0;f<2;f++){
	printf("%d ",S[f]);
}

	return 0;
}
