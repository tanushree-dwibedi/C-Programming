
#include <stdio.h>

int main() {
    // a. (int)'D' − (int)'A'
    int result_a = (int)'D' - (int)'A';
    printf("a. (int)'D' − (int)'A' = %d\n", result_a);

    // b. (char)((int)'C' + 2)
    char result_b = (char)((int)'C' + 2);
    printf("b. (char)((int)'C' + 2) = %c\n", result_b);

    // c. (int)'6' − (int)'7'
    int result_c = (int)'6' - (int)'7';
    printf("c. (int)'6' − (int)'7' = %d\n", result_c);

    return 0;
}
