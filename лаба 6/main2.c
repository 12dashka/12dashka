#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

char s[100];
int i,k=0,n;
   printf("name: ");
   gets(s);
   n=strlen(s);
   printf("\nname: %c. ",s[0]);
    for(i=0; i<strlen(s); i++){
     if(s[i]=='a') {k++;} else
    if(s[i]==' ') {  printf("%c. ",s[i+1]);}
     }
     printf("\nLine length =  %d",n);
     printf("\nkilkist a =  %d", k);
	return 0;
}
