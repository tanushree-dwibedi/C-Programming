#include <stdio.h>
#include <stdlib.h>  // For malloc and free

int main() {
    int n ;


    // Taking input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocating memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program
    }

    // Taking input for array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array elements
    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);

    int* ptr = (int*)malloc(n*sizeof(int));
    printf("Enter values ");

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
       scanf("%d",(ptr+i));
    }

    // Printing the array elements
    printf("The elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d",*(ptr+i));
    }
    printf("\n");

    // Freeing the allocated memory
    free(ptr);


    return 0;
}