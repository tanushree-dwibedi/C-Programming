#include <stdio.h>


//given an integer array arr , move all 0's to the end of it while mantaining the relative order of the non - zero elements.
int main(){

int arr[] = {5,0,2,0,0,4,1,3,0};
int n=9;
//required array = [5,2,4,1,3,0,0,0,0];
/*according to chatgpt this might create an index out of bound error
for(int i = 0 ;i<n-1 ;i++){
 for(int j = i;j<n;j++){
    if(arr[j]==0){
         int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
    }
 }
}
*/

// using an extra array; 

int brr[9];
int brridx = 0 ;
for(int i = 0 ;i< n ;i++){
    if(arr[i]!=0){
        brr[brridx]= arr[i];
        brridx++;
    }

}
while(brridx!=9){
    brr[brridx]=0;
    brridx++;
}
for(int i = 0 ;i<n;i++){
    printf("%d",brr[i]);
}

//using bubble sort 

for(int i = 0 ;i< n-1 ;i++){//o(n^2) , worst case
   // for(int j = 0 ; j<=n-2 ;j++){
    for(int j = 0 ; j<n-1-i ;j++){
      //  if(arr[j]<arr[j+1]){ DEcending
      if(arr[j]==0 ){ // accending
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(int i = 0 ;i<n;i++){
    printf("%d",arr[i]);
}

    return 0 ;
}

/*

#include <stdio.h>

int main() {
    int arr[] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int n = 9;
    
    int nonZeroIndex = 0;  // Pointer to track where to move non-zero elements

    // Traverse through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Move the non-zero element to the 'nonZeroIndex' position
            int temp = arr[i];
            arr[i] = arr[nonZeroIndex];
            arr[nonZeroIndex] = temp;
            nonZeroIndex++;
        }
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


*/