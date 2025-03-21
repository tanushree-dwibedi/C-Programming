#include <stdio.h>
#include <stdlib.h>

int main(){
    // int* pt = NULL;
    // printf("%p",pt);

    int* ptr = (int*)calloc(10, sizeof(int)); // Allocates memory for 10 integers, all initialized to 0
    ptr++;   // Moves the pointer ahead by one integer (4 bytes in most systems)
    free(ptr); // Tries to free the modified pointer, not the original one
    
    int* p = (int*)calloc(10, sizeof(int));
    int* temp = p;  // Store the original pointer
    temp++;            // Move the pointer
    free(temp);       // Free the original pointer
    


}