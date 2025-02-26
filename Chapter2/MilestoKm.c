#include <stdio.h>
 #define KMS_PER_MILE 1.609

int main(void){
    double miles;
    double kms;
    printf("Enter the distance in miles ");
    scanf("%lf",&miles);
    kms = KMS_PER_MILE*miles;
    printf(" the distance in kms is %lf ",kms);
return 0 ;    
}