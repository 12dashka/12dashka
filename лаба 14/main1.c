#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */





int main(void) {
char s1[100],s2[100];
int i,n,m,k=0;

 printf("s1= ");
  fflush(stdin);
gets(s1);
 printf("s2= ");
gets(s2);

n=strlen(s1);
m=strlen(s2);

for(i=0;i<n;i++){
    if((s1[i]=='a')||(s1[i]=='e')||(s1[i]=='i')||(s1[i]=='o')||(s1[i]=='u')){k++;}
}
for(i=0;i<m;i++){
    if((s2[i]=='a')||(s2[i]=='e')||(s2[i]=='i')||(s2[i]=='o')||(s2[i]=='u')){k++;}
}


printf("\n kilkist= %d",k);


	return 0;
}
