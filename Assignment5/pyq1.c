#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the compound ends with "OH"
bool hydroxide( char compound[]) {
    int len = strlen(compound);
    
    // Check if the last two characters are "OH"
    if (len >= 2 && compound[len - 2] == 'O' && compound[len - 1] == 'H') {
        return true;
    }
    return false;
}

int main() {
    char compound[100];
    
    // Take input from the user
    printf("Enter a chemical compound: ");
    scanf("%[^\n]s", compound);
    
    // Invoke the hydroxide function
    if (hydroxide(compound)) {
        printf("%s is a hydroxide.\n", compound);
    } else {
        printf("%s is not a hydroxide.\n", compound);
    }
    
    return 0;
}
