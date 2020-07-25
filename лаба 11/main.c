#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
char  c[100];
int h;
}g;
void p(g infa){
printf("last name %s \t height %d  \n", infa.c,infa.h);};

int main(){
int max=0,m1=0,m2=0,min=99;
int i,n,z,x,t,k;
g *inf;
printf("n=");
scanf("%d",&n);
inf = (g *) calloc (n,sizeof(g));
if(inf == 0){exit(1);}
    printf("\n");

for (i=0; i<n; i++){

        printf("last name ");
          fflush(stdin);
        gets(inf[i].c);
printf("height ");
scanf("%d",&inf[i].h);}


/* 1 */

for (i=0; i<n;i++){t=inf[i].h;
        if(t>max){max=t;x=i;}
        if(t<min){min=t;z=i;}

}
printf("\n max = ");p(inf[x]);
printf("\n min = ");p(inf[z]);

/* 1 */
/* 2 */

for (i=0; i<n;i++){t=inf[i].h;
        if((t>m1)&&(t<max)){m1=t;x=i;}}
for (i=0; i<n;i++){t=inf[i].h;
         if((t>m2)&&(t<m1)){m2=t;z=i;}}

printf("\n max 1 = ");p(inf[x]);
printf("\n max 2 = ");p(inf[z]);

/* 2 */
/* 3 */
m1=0;m2=0;
for (i=0; i<n;i++){t=inf[i].h;
        if(t>m1){m1=t;x=i;}}
for (i=0; i<n;i++){t=inf[i].h;
        if((t>m2)&&(t<m1)){m2=t;z=i;}}


printf("\n max 1 = ");p(inf[x]);
printf("\n max 2 = ");p(inf[z]);


/* 3 */
/* 4 */
printf("new------ \n");
k=0;
while(k<=n){
for (i=0; i<n;i++){
        t=inf[i].h;
        if(t==min){p(inf[i]);min=min+1;k++;i=-1;}}

min=min+1;
}




system("pause");
return 0;
}
