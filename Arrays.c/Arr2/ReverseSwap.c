#include <stdio.h>
#include <limits.h>

int main(){
    int arr[] =  {2,3,4,5,6,7};
    int i = 0 , j =sizeof(arr)/sizeof(arr[0])-1;


    

 while(i<j){//we can do the same thing using for loop
//for(int i = 0 , j = n -1 ; i<j;i++,j--)
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j]=temp;
    i++;
    j--;

 }


    for(int k = 0 ;k<sizeof(arr)/sizeof(arr[0]);k++){
        printf("%d ",arr[k]);

    }
}