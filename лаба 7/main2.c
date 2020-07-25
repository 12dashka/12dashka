#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double *A(int n) {
    return (double *)malloc(n*sizeof(double));
}
void am(int *a, int n) {

    int i,j;
    for(i = 0; i < n; i++){
            for(j=0;j<n;j++){
    *(a + i*n+j) = rand()%10-5;}}}
void ap(int *a, int n) {
    int i,j;
    for (i = 0; i < n; i++){printf("\n");
            for(j=0;j<n;j++){
    printf("%d ",    *(a + i*n+j));}}}


void m(int *a, int n) {
    int i, j,ch;
    int d=1;
    for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
            ch=*(a + i*n+j) ;
    if((ch<-1)||(ch>1)){
   d=d*ch;}}}

    printf("\ndobutok=%d",d);}
int main(){

    int *a;
    int n;
     printf("vvedit n");
    scanf("%d", &n);
a = A(n);
am(a, n);
ap(a, n);
m(a, n);

    return 0;}
