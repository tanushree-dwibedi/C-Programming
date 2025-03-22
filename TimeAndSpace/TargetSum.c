#include <stdio.h>

int main()
{

//int arr[]= {3,7,9,4,1,2,14,16};
int arr[]= {1,2,3,4,5,8,9,10};
int target = 12;
int n = 8;
for(int i=0 ;i<8-1;i++){//o(n^2)
  for(int j=i;j<8;j++){
    if(arr[i]+arr[j]==target){

        printf("(%d , %d)",arr[i],arr[j]);
    }
  }

}

//more optimal method;
int i =0 ;
int j =n-1;
while (i<j)//o(n)
{
 if(arr[i]+arr[j]==target){
    printf("(%d , %d)",arr[i],arr[j]);
   break;
 }
 else if(arr[i]+arr[j]>target){
    j--;
 }
 else {//if (arr[i]+arr[j]<target)
 i++;
 }

}

    return 0 ;
}