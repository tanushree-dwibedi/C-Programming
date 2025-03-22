#include <stdio.h>
#include <string.h>
#include <limits.h>
#include<stdbool.h>

//time complexity best O(n^2), avg O(n^2), worst O(n^2)
//when we talk about space complexity we talk about the extra space that is being used
// in this case no extra array is being used so space complexity is O(1)
//space complexity O(1) ,in all cases
//unstable sorting
int main(){
//for n elements we need n-1 passes 
// in each pass we find out the min element in the unsorted part
// after every pass the unsorted array reduces by 1 length
int arr[]= {7,4,5,9,8,2,1};
int n = 7;

for(int i = 0 ; i<n-1;i++){
    int min = INT_MAX, minidx = -1;

    for(int j = i ; j<=n-1;j++){
    if(arr[j]<min){
    min = arr[j];
    minidx = j;
    }

}
//swap the min and first elment of unsorted part
int temp = arr[i];
arr[i]=arr[minidx];
arr[minidx]= temp;
}


for(int i = 0 ;i<n;i++){
    printf("%d",arr[i]);
}

return 0 ;

}