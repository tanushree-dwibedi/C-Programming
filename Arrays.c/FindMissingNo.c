#include <stdio.h>
#include <stdbool.h>
int main(){

    //Given an array containing elements from 1 to 100 except one element in this range  is missing find the missing element ; 
    // we know to formula for finding the sum of elements from 1 to n :
    // n*(n+1)/2
    int arr[]={1,2,3,4,6,7,8,9,10};
int sum = 0, n =sizeof(arr)/sizeof(arr[0]);
int sizeplusmissingelement = n+1;
  sum=  sizeplusmissingelement*(sizeplusmissingelement+1)/2;  // this will give 45 but the actual sum should be 55, because 1 element is missing 
printf("%d \n",sum);

int newsum=0;
 for(int i = 0 ; i< n ;i++){
    newsum+=arr[i];
    } 

int missingel = sum - newsum;
   printf("%d \n",missingel);
//apply the same logic for 100 elements 
  
 //given an array  and a number x .Find out if x lies in the array or not
int arr2[] = {3,4,5,5,6,5,7};
int x= 5, idx = -1;
bool b = false;
 for(int i = 0 ; i<7;i++){
    if(arr2[i]==x){
        printf("The element %d is found at index %d ",arr2[i],i);//print all index;
        idx = i;//used if you want to print the index outside of the loop
       b=1;
         break; // to print only the first index;
    }
 } 

 for(int i = 6 ; i>0;i--){
    if(arr2[i]==x){
        printf("The element %d is found at index %d ",arr2[i],i);//print all index;
       b=true;
        idx = i;//used if you want to print the index outside of the loop
         break; // to print only the last index;
    }
 } 
 if(b==false)
  printf("The element is not found ");
//   else
//    printf("The element is not found ");
  
printf("\n");
  //wap to find a duplicate element from a given array of integers;
  int arr3[]={2,3,4,6,7,8,9,6};
  for(int i = 0;i<8;i++){
    for(int j = i+1 ; j<8;j++){
        if(arr3[i]==arr3[j]){
        printf("The duplicate element is %d" ,arr3[i]);
        break;}

    }
  }
  
printf("\n");
   
   return 0 ;
}

