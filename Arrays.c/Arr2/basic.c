#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int n ;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Try programiz.pro");
    int *arr = (int*)malloc(n*sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program
    }
for(int i=0 ; i<n ;i++){
    scanf("%d",&arr[i]);
}
for(int i=0 ; i<n ;i++){
    printf("%d ",arr[i]);
}
   // Freeing the allocated memory
    free(arr);
    return 0;
}