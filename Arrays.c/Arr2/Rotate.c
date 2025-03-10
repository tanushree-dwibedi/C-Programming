//Rotate the given array 'a' by k steps, where k is non - negative
// Note: k can be greater thean n as well where n is the size of array 'a'.

#include<stdio.h>

void reverse(int arr[],int n ,int a,int b){
    for(int i = a , j = b -1 ; i<j;i++,j--){
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]=temp;
        }
        return;
}

int main(){
int arr[]= {1,2,3,4,5,6,7};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 50;
k = k%n;
reverse(arr, n , 0 , n);
reverse(arr, n , 0 , k);
reverse(arr, n , k , n);




for(int l = 0 ;l<sizeof(arr)/sizeof(arr[0]);l++){
    printf("%d ",arr[l]);

}
}