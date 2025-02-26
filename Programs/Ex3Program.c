#include <stdio.h>
#define PI 3.14159
int main(){

int  x, y , z,n ,radius ;
double area , side , areaOfCircle; 


printf("ENter 3 integers");
scanf("%d%d%d",&x,&y,&z);
//printf("First = \n",x,"Second = \n",y,"Third= \n",z);
printf("First = %d\nSecond = %d\nThird= %d\n",x,y,z);

printf("Enter the value of n");
scanf("%d",&n);
printf("The value of n is %d \n",n);

printf("Enter the area and length of side : ");
  // Calculate the area of the square
   // area = side * side;
scanf("%lf%lf",&side,&area);
printf("The area of a square whose side length is %f cm is %f square cm .\n",side,area);

printf("Enter the radius of a circle : \n");
scanf("%d",radius);
areaOfCircle = PI*radius*radius;
printf("The area of the circle = %f",areaOfCircle);

   return 0 ;
}
