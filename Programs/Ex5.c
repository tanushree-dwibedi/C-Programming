#include <stdio.h>

int main(){
    int color , lime , straw , red , orange;
    double white ,green , blue , purple , crayon;
    color =2 ;
    crayon = -1.3;
    straw =1;
    red =3 ;
    purple = 0.3E+1;
   
    white = color*2.5/purple;
    green = color / purple;
orange = color/red;
blue = (color+straw)/(crayon+0.3);
lime = red/color + red%color;
purple = straw/red*color;

    printf("%lf\n",purple);
    printf("%lf\n",blue);
  printf("%d",lime);
return 0 ;
}