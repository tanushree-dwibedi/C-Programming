#include <stdio.h>
#include<stdbool.h>

int main(){
  //find the unique number in a given array where all the elements are being repeated twice with one unique value
int dup[] = {7,6,7,6,8,9,8,1,1};
for(int i = 0;i<9;i++){
    bool flag =false;
    for(int j = 0; j<9;j++){
        if( (i!=j )&& dup[i]==dup[j]){
     flag = true;
    break;
       }

    }

    if(flag==false){
        printf("Unique element is %d",dup[i]);
        break;
    }
  }


  int arr[] = {1, 2, 4, 3, 2, 992, 1, 4};
  int freq[1000] = {0};

  //alternate method
   // Count frequency of each element
   for (int i = 0; i < 8; i++) {
    freq[arr[i]]++;
}

// Print unique elements
for (int i = 0; i < 8; i++) {
    if (freq[arr[i]] == 1) {
        printf(" %d ", arr[i]);
    }
}
  return 0 ;
  }