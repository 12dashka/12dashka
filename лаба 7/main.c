#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double *A(int n) {
    return (double *)malloc(n*sizeof(double));
}
void am(int *a, int n) {

    int i;
    for(i = 0; i < n; i++){
    *(a + i) = rand()%30*1.12;}}
void ap(int *a, int n) {
    int i;
    for (i = 0; i < n; i++){
    printf("%d ", *(a + i));}}


void m(int *a, int n) {
    int i, j,ch;
    int d=1,k=0;
    for (i = 0; i < n; i++){ch=*(a + i);
    if((ch<15)||(ch>60)){
   k++;d=d*ch;}}

    printf("\nkilkist =%d \ndobutok=%d",k,d);}
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
