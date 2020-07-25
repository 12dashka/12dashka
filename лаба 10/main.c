#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
char n[64],a[64], c[4];
float p;
int v, vd;
}g;

int main(){
int i,n,s=0;
g *inf;
printf("n=");
scanf("%d",&n);
inf = (g *) calloc (n,sizeof(g));
if(inf == 0){exit(1);}
    printf("\n");
for (i=0; i<n; i++){
        printf("name ");
        fflush(stdin);
        gets(inf[i].n);
        printf("adres ");
        gets(inf[i].a);
        printf("for sport? ");
        gets(inf[i].c);
        printf("price ");
        scanf("%f", &inf[i].p);
        printf("years for .. to .. ");
        scanf("%d%d",&inf[i].v ,&inf[i].vd);}
for (i=0; i<n;i++){
            if((inf[i].c[0]=='y')&&(inf[i].vd<=10)){s=s+inf[i].p;}}
            printf("sum=%d",s);
system("pause");
return 0;
}
