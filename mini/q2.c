// Chatflow Wireless offers customers 600 weekday minutes for a flat rate of 39.99. Night (8 P.M.
//  to 7 A.M. ) and weekend minutes are free, but additional weekday minutes cost 0.40 each. There
//  are taxes of 5.25% on all charges. Write a program that prompts the user to enter the number of
//  weekday minutes, night minutes, and weekend minutes used, and calculates the monthly bill and
//  average cost of a minute before taxes. The program should display with labels all the input data,
//  the pretax bill and average minute cost, the taxes, and the total bill.

#include <stdio.h>
#define TAX 0.0525

int main(){
   double rate_per_min = 39.99/600 , weekday_min, night_min ,weekend_min , monthly_bill ,pretax , avg_min_cost , taxes, total_bill ;
printf("ENter the no of weekday minutes : ");
scanf("%lf",&weekday_min);
printf("ENter the no of night minutes : ");
scanf("%lf",&night_min);
printf("ENter the no of weekend minutes : ");
scanf("%lf",&weekend_min);

printf("Average cost of a minute before taxes = %lf \n", rate_per_min);
if(weekday_min<600||weekday_min==600){
    pretax = weekday_min*rate_per_min;
}
else{
    pretax = (600*rate_per_min)+(weekday_min-600)*0.04;
}
printf(" the no of weekday minutes : %lf \n",weekday_min);
printf(" the no of night minutes : %lf \n",night_min);
printf(" the no of weekend minutes : %lf \n",weekend_min);

printf("Pretax = %lf \n",pretax);
printf("tax = %lf \n",TAX);
total_bill = pretax-(pretax*TAX);
printf("Total bill After tax = %lf \n",total_bill);
return 0;

}