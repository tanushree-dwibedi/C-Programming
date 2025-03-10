#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    /*
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
    */

    int arr[]= {1,2,3,4,5,6,7,8};
int x = 12 , count=0;
for(int i=0 ; i<8-2 ;i++){
    for(int j = i+1; j<8-1;j++){
        for(int k = j+1; k<8;k++){
        if(arr[i]+arr[j]+arr[k]==x)
        count++;
    }
   
}
}
printf("%d" ,count);
  
    return 0;
}