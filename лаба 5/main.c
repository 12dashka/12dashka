#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
    int i,n,b;
    printf("Vvedit n=");
    scanf("%d",&n);
    int a[n],*p;
    p=a;
    printf("Array:");
    for(i=0;i<n;i++)
	{  scanf("\n%d",&a[i]);
    }   b=*p;   for(i=0;i<n;i++){
     if(i%2==0)
	 {  if(a[i]<b)b=*(p+i);  } }   printf("\nmin element = %d",b); return 0; }
