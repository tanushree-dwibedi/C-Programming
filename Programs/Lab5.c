#include <stdio.h>
int main(){
    double timeInHour, acceleration , initialSpeed  , finalSpeed , time;

    printf("Enter the initial speed: ");
    scanf("%lf",&initialSpeed);
 printf("Enter the final speed: ");
    scanf("%lf",&finalSpeed);
     printf("Enter the time: ");
     timeInHour=time/60.0;
    scanf("%lf",&timeInHour);
    acceleration = (finalSpeed - initialSpeed)/timeInHour;
    printf("acceleration = %lf",acceleration);
}