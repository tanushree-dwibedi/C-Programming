#include <stdio.h>

int main(){

    int arr[] ={1,2,3,4,6,5,4};

    for(int i = 0 ; i <7-1;i++){
        for(int j=i+ 1; j <7 ; j++){
     if(arr[i]==arr[j]){
        printf("%d",arr[i]);
     break;
     }


        }
    }

}