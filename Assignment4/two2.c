#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool isitprime(int num) {
    if (num < 2) return false; // Numbers less than 2 are not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
bool sumofDigits(int num){
    int sum = 0 ,  r ;
    while(num>0){
        r=num%10;
        sum+=r;
        num/=10;
    }
    if(sum%2==0)
    return true;
    else
    return false;
}

// Function to determine multiples, evenness, and primality
void run(int num, int *ismul, int *isprime, int *iseve) {
    // Check if the number is a multiple of 7, 11, or 13
    if (num % 7 == 0 || num % 11 == 0 || num % 13 == 0)
        *ismul = 1;
    else
        *ismul = 0;

    // Check if the number is even
    if (sumofDigits(num))
        *iseve = 1;
    else
        *iseve = 0;

    // Check if the number is prime
    if (isitprime(num))
        *isprime = 1;
    else
        *isprime = 0;
}

int main() {
    int n , num;           // Example input number
    int ismul, isprime, iseve; // Variables to store the results

printf("Enter the number of numbers you want to evaluate: ");
scanf("%d",&n);
    // Call the function to analyze the number
    for(int i =1 ;i<=n ;i++){
        printf("Enter the %dth number :",i);
        scanf("%d",&num);
    run(num, &ismul, &isprime, &iseve);

    // Print the results
    printf("Number: %d\n", num);
    printf("Multiple of 7, 11, or 13: %s\n", ismul ? "Yes" : "No");
    printf("Sum of digits is even: %s\n", iseve ? "Even" : "Odd");
    printf("Prime: %s\n", isprime ? "Yes" : "No");
    }
    return 0;
}
