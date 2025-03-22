#include <stdio.h>
#include <limits.h>
//given an integer array and an integer k where k < = size of array , we need to return the kth smallest element of the array
int main(){
int arr[]={5,2,1,3,4};
// int arr[]={5,10,22,4,3,4};
int k = 3;
int n =5;
// so we need to return the 3rd largest elment 
//you can apply bubble sort and after sorting print the elment ar k-1 th index

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
for(int i = 0 ;i<n;i++){
   // printf("%d",arr[i]);
}
printf("%d",arr[k-1]);
//here the time complexity will be O(n)


//we can do the same question using selection sort , instead of doing n-1 passes you can do only k-1 passes



for(int i = 0 ; i<k-1;i++){
    int min = INT_MAX, minidx = -1;

    for(int j = i ; j<=n-1;j++){
    if(arr[j]<min){
    min = arr[j];
    minidx = j;
    }

}
}
printf("%d",arr[k-1]);
//here the time complexity will be O(k)
    return 0 ;
}