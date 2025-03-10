
#include<stdio.h>
//#include<stdlib.h>
#include<limits.h>//INT_MIN,INT_MAX

void reverse(int arr[]){
    int i = 0 ; 
int size = *(&arr+1)-arr;
    int j = size-1 ;
    //for(i=0,j=6 ;i<j ;i++,j--)
    while(i<j){
        //arr[i] and arr[j];
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
        i++;
        j--;
    }
}

int main(){
   // int x = 9,sum=0 ;
    int arr[]= {1,3,4,4,5,7,2,8,8};

    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d \n",size);

reverse(arr);
 for(int i = 0 ; i<sizeof(arr)/sizeof(arr[0]);i++){
   printf("%d ",arr[i]);
  }
printf("%d \n");
  
  int arrdup[sizeof(arr)/sizeof(arr[0])];
  for(int i = 0 ; i<sizeof(arrdup)/sizeof(arrdup[0]);i++){
   arrdup[i]= arr[size-i-1];
  }
  for(int i = 0 ; i<sizeof(arrdup)/sizeof(arrdup[0]);i++){
   printf("%d ",arrdup[i]);
  }

printf("%d \n");

 for(int i = 0 ; i<size/2;i++){
    int temp = arr[i];
   arr[i]= arr[size-i-1];
arr[size-i-1]= temp;
  }
 for(int i = 0 ; i<sizeof(arr)/sizeof(arr[0]);i++){
   printf("%d ",arr[i]);
  }
printf("%d \n");

//int max = arr[0],secmax=arr[0];//this might cause problems in case of duplicate elements
int max = INT_MIN,secmax=INT_MIN ;
    for(int k = 1; k<sizeof(arr)/sizeof(arr[0]);k++){
        if(arr[k]>max)
        max = arr[k];
    }
  for(int k = 1; k<sizeof(arr)/sizeof(arr[0]);k++){
        if(arr[k]>secmax && arr[k]!=max)
           //if(arr[k]>secmax && arr[k]<max)
        secmax = arr[k];

    }
printf("%d ",secmax);
//another method //This wont work in case of duplicates rather it'll return the max element
//only if the max element has duplicates

/*
int smax = INT_MIN , newmax = INT_MIN;
for(int i = 0 ; i<sizeof(arr)/sizeof(arr[0]);i++){
if(arr[i]>newmax){
    smax = newmax;
    newmax=arr[i];
}
else if(arr[i]>smax){
    smax=arr[i];
}
}
printf("%d ",smax);
    return 0;
}

*/

//the below code will work even for duplicates
int smax = INT_MIN , newmax = INT_MIN;
for(int i = 0 ; i<sizeof(arr)/sizeof(arr[0]);i++){
if(arr[i]>newmax){
    smax = newmax;
    newmax=arr[i];
}
else if(arr[i]>smax && arr[i]!=newmax){
    smax=arr[i];
}
}
printf("%d ",smax);
    return 0;
}













// #include <stdio.h>

// int main() {
//     int arr[] = {1, 3, 4, 5, 7, 2, 8};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     if (n < 2) {
//         printf("Array must have at least two elements.\n");
//         return 0;
//     }

//     int max = arr[0], secmax = -1;

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             secmax = max;  // Update secmax to the previous max
//             max = arr[i];  // Update max
//         } else if (arr[i] > secmax && arr[i] != max) {
//             secmax = arr[i];  // Update secmax only if it's less than max
//         }
//     }

//     if (secmax == -1) {
//         printf("No second maximum found (all elements may be equal).\n");
//     } else {
//         printf("Second maximum is %d\n", secmax);
//     }

//     return 0;
// }
