#include<stdio.h>


int main(){

int n ; 
printf("Enter n : ");
scanf("%d",&n);
int arr[n] ;
  printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }

int ispal = 0 ;
for(int i = 0 ; i < (*(&arr+1)-arr)/2;i++){
  if(arr[i]!=arr[n-i-1]){
    ispal = 1;
    break;
  }
  
}

if(ispal==0){
    printf("it is a palindrome ");
}
else{
     printf("it is not a palindrome ");
}

}