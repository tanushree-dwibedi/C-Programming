#include <stdio.h>//used to include printf() , scanf()
#include <math.h> // used to include various functions of maths
#include <limits.h>// INT_MAX , INT_MIN include
#include <stdbool.h>// true and false
//#include is known as the preprocessor directive 
//it is used to include header files , like stdio.h , limits.h , math.h 
//cpp me .h nahi lagta

int main(){
    printf("Hello world");
    int n = 8; 
    printf("%lf \n",sqrt(n));
    printf("%lf \n",cbrt(n));

int x = INT_MAX;
printf("%d \n",x);
int y = INT_MIN;
printf("%d\n ",y);
long long z = LONG_MAX;
printf("%lld\n", z);  // Use %lld for long long
// 9223372036854775807,it should be printing this number but it is printing INT_MAX i.e, 2147483647

long z = LONG_MAX;  // LONG_MAX is the maximum value of 'long'
printf("%ld\n", z);  // Correct format specifier for 'long'

//int -> 4bytes -> 4*8 = 32 bits -> 2^32 options / numbers
//range -> -2^16 to 2^16 -1
//long -> 8bytes -> 8*8 = 64 -> 2^32 options / numbers
//range -> -2^32 to 2^32 -1
//* exception in c++ long also takes 4 bytes only
}