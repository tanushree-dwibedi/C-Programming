#include <stdio.h>
#include <string.h>

int main(){

int arr[]= {6,1,7,3,2,5,4,8,9,9,10};

int n = 11 ;
//method 1 ;//uses extra time
// here total 53 comparisons will be made
for(int i = 0 ;i< n-1;i++){
    int ans =0;
    for(int j=i+1;j<n;j++){
     if(arr[i]==arr[j]){
       printf("%d",arr[i]);
        break;
     }

    }

}
//method 2;// uses extra space
//int brr[]={0,0,0,0,0,0,0,0,0,0,0};
// for(int i = 0 ;i< n;i++){
//    brr[i]=0;
// }
int brr[11] = {0}; // Frequency tracker
/*
    for (int i = 0; i < 11; i++) {
        if (++brr[arr[i]] > 1) { // Increment and check frequency
            printf("Duplicate element found: %d\n", arr[i]);
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        brr[arr[i]]++; // Increment frequency for the value in arr
        if (brr[arr[i]] > 1) {
            printf("Duplicate element found: %d\n", arr[i]);
            break; // Stop after finding the first duplicate
        }
    }
*/

    for (int i = 0; i < n; i++) {
        if (brr[arr[i]] == 0) {
            brr[arr[i]] = 1; // Mark the value as seen
        } else {
            printf("Duplicate element found: %d\n", arr[i]);
            break; // Stop after the first duplicate
        }
    }

//method 3 ; // best method 
int n2= n-1;
int sum= n2*(n2+1)/2, sum2=0;
for(int i=0 ;i<n;i++){
    sum2+=arr[i];
}
   printf("Duplicate element found: %d\n", sum2-sum);
           
return 0 ;
}
