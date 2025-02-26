/* 
 * Compute the sum and average of two numbers. 
 */ 
#include <stdio.h> /* printf, scanf definitions */ 
int 
main(void) 
{ 
 double one, two, /* input - numbers to process */ 
 sum, /* output - sum of one and two */ 
 average; /* output - average of one and two */ 
 /* Get two numbers. */ 
 scanf("%lf",&one);
 scanf("%lf",&two);
 /* Compute sum of numbers. */
 sum = one+two; 
 /* Compute average of numbers. */ 
 average=sum/2;
 /* Display sum and average. */ 
 printf("The sum is %lf ,the average is %lf",sum,average);
 
 return (0); 
} 