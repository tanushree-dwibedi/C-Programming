#include <stdio.h>

int main(){
    int degree;
    printf("Enter a degree  : ");
    scanf("%d",&degree);
    if(degree >0 && degree<90){
        printf("The bearing is north %d degree east" , degree);
    }
     else if(degree>90 && degree<180){
        degree = 180-degree;
         printf("The bearing is south %d degree east" , degree);
     }
        else if(degree>180 && degree<270){
        degree = degree-180;
         printf("The bearing is south %d degree west" , degree);
     }
     else if(degree>270 && degree<360){
        degree= 360- degree;
         printf("The bearing is north %d degree west" , degree);
     }
     else if(degree==180){
        printf("%d degree south",degree);
     }
      else if(degree==90){
        printf("%d degree 80",degree);
     }
      else if(degree==270){
        printf("%d degree west",degree);
     }
      else if(degree==360|| degree==0){
        printf("%d degree north",degree);
     }
     else{
        printf("invalid input ");
     }
}