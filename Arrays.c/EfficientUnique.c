#include <stdio.h>
#include <stdbool.h>

int main() {
    int dup[] = {7, 6, 7, 6, 8, 9, 8, 1, 1};
    int n = sizeof(dup) / sizeof(dup[0]);

    for (int i = 0; i < n; i++) {
        bool flag = false;

        // Check all elements (not just future ones)
        for (int j = 0; j < n; j++) {
            if (i != j && dup[i] == dup[j]) {
                flag = true;
                break;
            }
        }

        if (!flag) {  // If no duplicate found, this is unique
            printf("Unique element is %d\n", dup[i]);
            break;  // Stop after finding the unique number
        }
    }

    return 0;
}
