#include <stdio.h>
#include <math.h>
int main(){
double Payment , PurchasPrice , amountBorrowed,downPayment, interestRate , NoOfPayments; 
printf("Enter the Purchasing price");
scanf("%lf",&PurchasPrice);
printf("Enter the down payment");
scanf("%lf",&downPayment);

printf("Enter the Interest Rate");
scanf("%lf",&interestRate);
printf("Enter the number of payments");
scanf("%lf",&NoOfPayments);
 amountBorrowed = PurchasPrice-downPayment;
 printf("The amount borrowed= %lf",amountBorrowed);
Payment =(interestRate*amountBorrowed)/(1-pow((1+interestRate),-NoOfPayments));
printf("The Payment is $%2.lf",Payment);

return 0 ;
}
