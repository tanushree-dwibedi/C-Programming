#include <stdio.h>
#define PI 3.14159265359
#define Area(r) (PI*r*r)
//macros and macro functions are like typedef
//#defines are  like constants their values cannot be changed within the program 

float area(float r){
    return PI*r*r;
}

int main(){
    double x = 3.14159265359;
    printf("%.20f\n",x);//this is giving wrong ans after 16 decimal digits
   // PI = 33;// this will show an error cannot redefine macros 
    printf("%.15f\n",PI);
    printf("%f\n",area(10));
    printf("%f\n",Area(10));
    

}