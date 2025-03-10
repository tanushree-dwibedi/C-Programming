#include<stdio.h>
#include <stdbool.h>
int main(){

int arr[]= {1,2,4,3,2,1,4};
//here 3 is the unique element;
int n =7;

for(int i = 0 ; i< n-1 ;i++){

    bool flag = true;
    for(int j = i+1;j<n;j++){
        if(i!=j && arr[i]==arr[j]){
            flag = false;
            break;
        }
        
    }
    if(flag ==true){
printf("%d",arr[i]);
break;
    }

}



//to print multiple unique elements
int ar[]= {1,2,4,3,2,992,1,4};
//here there are 2 unique element;


for(int i = 0 ; i< 8-1 ;i++){

    bool flag = true;
    for(int j = 0;j<8;j++){
        if(i!=j && ar[i]==ar[j]){
            flag = false;
            break;
        }
        
    }
    if(flag ==true){
printf("%d ",ar[i]);
//break;//just remove this break statement;
    }

}


}