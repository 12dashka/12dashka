#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,r,a,b,c;
    printf("vvedit x y");
    scanf("%f", &x);     scanf("%f", &y);

    if (y<0){if ((x*x+y*y)<1){printf("yes");} else {printf("no");};}

    if (y>0){
        a=((-1)-x)+y;  b=(0-x)-(1-y); c=((1-x)+y)*(-1);

        if (((a<0)&&(b<0)&&(c<0))||((a>0)&&(b>0)&&(c>0))){printf("yes");} else {printf("no");};}
if (y=0){if((x>-1)&&(x<1)){printf("yes");} else {printf("no");};}
}
