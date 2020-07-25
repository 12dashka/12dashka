#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double *A(int n) {
    return (double *)malloc(n*n*sizeof(double));}
double *B(int m) {
    return (double *)malloc(m*m*sizeof(double));}

void am(int *a, int n) {
    int i;
    for(i = 0; i < n; i++){
    a[i] = rand()%10-5;}}
void bm(int *b, int m) {
    int i;
    for(i = 0; i < m; i++){
    b[i] = rand()%10-5;}}
void ap(int *a, int n) {
    int i;
    for (i = 0; i < n; i++){
    printf("%d ", a[i]);}}
void bp(int *b, int m) {
    int i;
    for (i = 0; i < m; i++){
    printf("%d ", b[i]);}}
void s(int *a, int *b,int n,int m,int t) {
    int i,k=0;

    for (i = 0; i < n; i++){
    if (a[i]>t){k++;}}

     for (i = 0; i < m; i++){
    if (b[i]>t){k++;}}
       printf("%d ", k);}


int main(){
    int *a,*b;
    int n,m,t;
    printf("\n vvedit kilkist a ");
    scanf("%d", &n);
     printf("\n vvedit kilkist b ");
    scanf("%d", &m);
    printf("\n vvedit chislo ");
     scanf("%d", &t);
a = A(n);
b = B (m);

printf("\n massiv a-------- \n");
am(a, n);
ap(a, n);
printf("\n massiv b-------- \n");
bm(b, m);
bp(b, m);
printf("\n vidpovid \n");
s(a,b,n,m,t); free(a); free(b);
return 0;}
