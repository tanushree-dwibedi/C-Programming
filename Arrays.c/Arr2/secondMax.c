#include <stdio.h>
#include <limits.h>

int main(){
    int arr[]= {1,6,3,2,5,7,7,4};
int max = INT_MIN;
int smax = INT_MIN;
    for(int i = 0 ;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i] && max != arr[i]){
            smax = arr[i];
        }
    }
    


    printf("%d ",max);
    printf("%d ",smax);
}