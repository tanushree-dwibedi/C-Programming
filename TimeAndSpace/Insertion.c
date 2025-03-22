#include <stdio.h>


//time complexity best O(n), avg O(n^2), worst O(n^2)
//swapping from end till the element finds its position
//swap happens only when the element is smaller than the / its left element
//stable sorting

int main(){

int arr[]= {5,4,3,2,1,9,8};
int n=7;
for(int i = 1;i<=n-1;i++ ){
  int j = i;
while (j>=1 && arr[j]<arr[j-1])
{
//    swap(arr[j],arr[j-1]);
int temp = arr[j];
arr[j]= arr[j-1];
arr[j-1]= temp;
   j--;
}


}

for(int i = 0 ;i<n;i++){
    printf("%d",arr[i]);
}

    return 0;
}

//for loop ham tab lagate hen jab hame pata hota he ki ham kitni iterations karne wale hen
//while loop ham tab lagate hen jab hame pata nahi hota ki ham kitni swapping karne wale hen