//rotate an array by k steps where k is not negative 

#include<stdio.h>



void reverse(int arr[], int  a , int b){

for(int i = a , j = b  ; i<j;i++,j--){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
// Key Points
// Array Decay: When you pass arr[] to a function, it is treated as a pointer to the first element. Consequently, sizeof(arr) within the function gives the size of the pointer, not the array.

// Dynamic Size Calculation Issue: The expression *(&arr + 1) - arr only works correctly in the main function where the array is defined. Inside the function, &arr doesn't have the same meaning because arr is a pointer, not the original array.

// Solution: Pass the size of the array as an additional parameter to the function.
// for(int i = 0 ; i<*(&arr+1)-arr ; i++){//wrong
// for(int i =0 ; i<9;i++){//right
//     printf("%d ",arr[i]);
// }
 }

int main(){

int arr[] = {1,2,3,4,5,6,7,8,9};
int k = 3;
//k can be greater than n where n is the size of the array
// here it implies piche ke 3 elelments ko aage le aao
//expected array = {7,8,9,1,2,3,4,5,6};
int n = *(&arr+1)-arr;

reverse(arr,0,n-1);
reverse(arr,0,k-1);
reverse(arr,k,n-1);


 for(int i = 0 ; i<*(&arr+1)-arr ; i++){
    printf("%d ",arr[i]);
}

return 0 ;
}