#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int SumRange(int a,int b){
int s=0,i;
if(a<b){
for (i=a;i<=b;i++){
s=s+i;

}}
return s;}
//* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[])
{
int a,b,c;
printf("vvedit a ta b ");
scanf("%d %d",&a ,&b);
c=SumRange(a,b);
printf("\n suma= %d", c);
return 0;
}
