#include <stdio.h>
#include <string.h>
#include <limits.h>
#include<stdbool.h>
//time complexity best O(n), avg O(n^2), worst O(n^2)
//when we talk about space complexity we talk about the extra space that is being used
// in this case no extra array is being used so space complexity is O(1)
//space complexity O(1) ,in all cases
//stable sorting
int main(){
//'n' elements in the array -> 'n-1' passes
//After every pass , we read to apply bubble sort on the unsorted elments only 
//and we do not need to check the " largest " element.
int brr[]= {6,1,7,3,2,5,4,8,9,9,10};
//Nested Loops
//Outer loop will shtand for no of passes 
//Inner loop will do the swapping
int arr[]={5,4,3,2,1,9,8};
int n =7;
for(int i = 0 ;i< n-1 ;i++){//o(n^2) , worst case
   // for(int j = 0 ; j<=n-2 ;j++){
    for(int j = 0 ; j<n-1-i ;j++){
      //  if(arr[j]<arr[j+1]){ DEcending
      if(arr[j]>arr[j+1]){ // accending
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
        }
    }
}
//best case, O(n),   avg case, O(n^2)
for(int i = 0 ;i< n-1 ;i++){//o(n^2) , worst case
   // for(int j = 0 ; j<=n-2 ;j++){
   
   bool flag = true;
    for(int j = 0 ; j<n-1-i ;j++){
       // if(arr[j]<arr[j+1]){ DEcending
        if(arr[j]>arr[j+1]){ 
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
            flag = false;
        }
    }
    if(flag == true) break;
}
for(int i = 0 ;i<n;i++){
    printf("%d",arr[i]);
}
return 0 ;
}