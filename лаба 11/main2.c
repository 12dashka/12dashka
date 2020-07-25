#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
char  c[100];
int h;
}g;
void p(g infa){
printf("city %s \t members %d  \n", infa.c,infa.h);};

int main(){
int i,n;
g *inf;
printf("n=");
scanf("%d",&n);
inf = (g *) calloc (n,sizeof(g));
if(inf == 0){exit(1);}
    printf("\n");

for (i=0; i<n; i++){

printf("city ");
fflush(stdin);
gets(inf[i].c);
printf("members ");
scanf("%d",&inf[i].h);}

for (i=0; i<3;i++){p(inf[i]);}

system("pause");
return 0;
}
