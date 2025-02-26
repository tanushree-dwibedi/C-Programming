#include <stdio.h>

int main(){

double x,y;
int m , n ;

x=10.5;
y=7.2;
m=5;
n=2;

printf("%lf\n",x / (double)m);
printf("%lf\n",x / m);
printf("%lf\n",(double)(n * m));
printf("%lf\n", (double)(n / m) + y);
printf("%lf\n",(double)(n / m) );

}