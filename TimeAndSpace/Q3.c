#include <stdio.h>
//24699
// given an array of digits (values are from 9=0 to 9 , the task is to find the minimum possible sum of two numbers formed from digitsof the array . Please note tht all digits of the given array must be used to form the 2 numbers ).

int main(){
int arr[] = {5,3,1,2,4};
int n = 5;
for(int i = 0 ;i< n-1 ;i++){//o(n^2) , worst case
   // for(int j = 0 ; j<=n-2 ;j++){
    for(int j = 0 ; j<n-1-i ;j++){
      //  if(arr[j]<arr[j+1]){ DEcending
      if(arr[j]>arr[j+1]){ // accending
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
        }
    }
}
//minimum number formed by the digits
for(int i = 0 ;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");

 //how to swap the last 2 elements of the array 
 // if last two elements are same
 // then swap the second last and third last element
//and so on;

int num1 = 0, num2 = 0;
int idx1=0,idx2=0;
while (idx1!=n)
{
    num1 = num1*10 + arr[idx1];
    idx1++;

}

printf("%d \n",num1);
for(int i = n-1 ;i>0 ;i--){
    if(arr[i]!=arr[i-1]){
        int temp = arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
        break;
    }
  
}



//second minimum number formed by the digits
for(int i = 0 ;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");

while (idx2!=n)
{
    num2 = num2*10 + arr[idx2];
    idx2++;

}
printf("%d \n",num2);
printf("%d",num1+num2);
    return 0 ;
}