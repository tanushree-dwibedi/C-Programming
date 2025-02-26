#include <stdio.h>

#define PI 3.14159
#define MAX_I 1000

int main() {
    // Variable declarations
    double x, y;
    int a, b, i;
    
    // Initialize variables
    a = 3;//7
    b = 4;//3
    y = -1.0;//2.0
    
    // Statement a
    i = a % b;
    printf("a. i = a %% b = %d\n", i);  // Output: 3
    
    // Statement b
    i = (989 - MAX_I) / a;
    printf("b. i = (989 - MAX_I) / a = %d\n", i);  // Output: -3
    
    // Statement c
    i = b % a;
    printf("c. i = b %% a = %d\n", i);  // Output: 1
    
    // Statement d
    x = PI * y;
    printf("d. x = PI * y = %f\n", x);  // Output: -3.141590
    
    // Statement e
    i = a / -b;
    printf("e. i = a / -b = %d\n", i);  // Output: -0
    
    // Statement f
    x = a / b;
    printf("f. x = a / b = %f\n", x);  // Output: 0.000000
    
    // Statement g, x = a % (a / b);
    // Division by zero is invalid, so we skip this statement
    
    // Statement h,i = b / 0; 
    // Division by zero is invalid, so we skip this statement
    
    // Statement i
    i = a % (990 - MAX_I);
    printf("i. i = a %% (990 - MAX_I) = %d\n", i);  // Output: 3
    
    // Statement j
    i = (MAX_I - 990) / a;
    printf("j. i = (MAX_I - 990) / a = %d\n", i);  // Output: 3
    
    // Statement k
    x = a / y;
    printf("k. x = a / y = %f\n", x);  // Output: -3.000000
    
    // Statement l, i = PI * a; 
    // This is invalid as PI * a is a double and i is an int
    
    // Statement m
    x = PI / y;
    printf("m. x = PI / y = %f\n", x);  // Output: -3.141590
    
    // Statement n
    x = b / a;
    printf("n. x = b / a = %f\n", x);  // Output: 1.000000
    
    // Statement o
    i = (MAX_I - 990) % a;
    printf("o. i = (MAX_I - 990) %% a = %d\n", i);  // Output: 1
    
    // Statement p, i = a % 0; 
    // Division by zero is invalid, so we skip this statement
    
    // Statement q
    i = a % (MAX_I - 990);
    printf("q. i = a %% (MAX_I - 990) = %d\n", i);  // Output: 3
    
    // Statement r
    x = (double) a / b;
    printf("r. x = (double) a / b = %f\n", x);  // Output: 0.750000
    
    return 0;
}
