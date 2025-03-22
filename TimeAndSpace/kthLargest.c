// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>
int main() {

int arr[] = {7,4,15,9,28,2,1};
int n = 7, k = 3;

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

  if(i==k-1)
    {
        printf("%d \n",arr[i]);
        break;
    }
}


// for(int i = 0 ;i<n;i++){
//     printf("%d ",arr[i]);
// }

    return 0;
}