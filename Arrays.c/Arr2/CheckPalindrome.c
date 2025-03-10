#include <stdio.h>


int main(){
    int arr[] = {1,2,43,6,5,3,2,1};
int check = 1;
    for(int i = 0 , j = sizeof(arr)/sizeof(arr[0]) -1 ; i<j;i++,j--){
if(arr[i]!=arr[j]){
    check=0;
    break;
}

 }
 if(check==0){
  printf("is not a palindrome");
 }
else
printf("is a palindrome");

}