#include <stdio.h>

int main(){
    int x = 9,sum=0 ;
    int arr[]= {1,3,4,5,7,2,8};
    //pair means 2 numbers add any two numbers in the array to get the sum 9, here there are only 3 pairs 
for(int i = 0 ; i<sizeof(arr)/sizeof(arr[0])-2;i++){
     
  for(int j= i+1 ; j<sizeof(arr)/sizeof(arr[0])-1;j++){

    for(int k = j+1 ; k<sizeof(arr)/sizeof(arr[0]);k++){
    if(arr[i]+arr[j]+arr[k]==9){
sum++;
 printf("(%d %d %d)", arr[i],arr[j],arr[k]);
    }
   
}  
  }
}
printf("%d",sum);
}