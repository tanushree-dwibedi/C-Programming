//  Define a structure type element t to represent one element from the periodic table of elements.
//  Components should include the atomic number (an integer); the name, chemical symbol, and
//  class (strings); a numeric field for the atomic weight; and a seven-element array of integers
//  for the number of electrons in each shell. The following are the components of an element t
//  structure for sodium.
//  11 Sodium Na alkali metal 22.9898 2 8 1 0 0 0 0
//  Define and test I/O functions scan element and print element
#include <stdio.h>
#include <string.h>

typedef struct element {
    int atmnum;
    char name[50];
    char symbol[5];
    char class[50];
    double atm_weight;
    int electrons[7];
} element_t;

void scan_element(element_t *element) {
    printf("Enter atomic number: ");
    scanf("%d", &element->atmnum);
    
    printf("Enter name: ");
    scanf(" %[^\n]", element->name);  // Remove extra space in format specifier
    
    printf("Enter symbol: ");
    scanf(" %[^\n]", element->symbol);
    
    printf("Enter class: ");
    scanf(" %[^\n]", element->class);
    
    printf("Enter atomic weight: ");
    scanf("%lf", &element->atm_weight);  // Use %lf for double
    
    printf("Enter number of electrons in each shell (7 values): ");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &element->electrons[i]);
    }
}

void print_element(element_t *element) {
    printf("\nThe atomic number is: %d\n", element->atmnum);
    printf("The atomic name is: %s\n", element->name);
    printf("The atomic symbol is: %s\n", element->symbol);
    printf("The atomic class is: %s\n", element->class);
    printf("The atomic weight is: %.2lf\n", element->atm_weight);  // Use %.2lf for formatted output

    printf("The electrons in each shell (7 values) are: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", element->electrons[i]);
    }
    printf("\n");
}

int main() {
    element_t sodium;

    printf("Enter element information for sodium:\n");
    scan_element(&sodium);

    printf("\nElement information for sodium:\n");
    print_element(&sodium);

    return 0;
}

// Incorrect scanf format for strings

// scanf("% [^\n]s", element->name);, scanf("% [^\n]s", element->symbol);, etc., 
// have an extra space before %. 
// Also, the format specifier should be "%49[^\n]" (for name),
//  "%4[^\n]" (for symbol), etc., to prevent buffer overflow.