//  079400804501
//  024000162860
//  011110856807
//  051000138101

#include <stdio.h>
#include <stdbool.h>
bool ans(int arr[],int n){
    int oddsum=0 , evesum=0, newsum,lastdig , checksum;
  // Sum the values at odd and even indices (excluding the last checksum digit)
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            oddsum += arr[i];
        } else {
            evesum += arr[i];
        }
    }
printf(" odd %d \n",oddsum);
printf("eve %d \n",evesum);
newsum= oddsum*3+evesum;
printf("new %d \n ", newsum);
lastdig = newsum%10;
printf("last %d \n",lastdig);
if(lastdig==0)
checksum = lastdig;
else
checksum = 10-lastdig;

printf("checksum %d \n",checksum);
if(checksum==arr[n-1]){
    return true;
}
return false;
}

int main(){
    int arr[12];
    //={ 0,7,9,4,0,0,8,0,4,5,0,1};
    int a, n =12;
    for(int i = 0 ;i< n ;i++){
       scanf("%d",&arr[i]);
  
    }



if(ans(arr, n)==true){
      for(int i = 0 ;i< n ;i++){
        printf("%d ",arr[i]);
    }

    printf("validated.");
}
else
{
      for(int i = 0 ;i< n ;i++){
        printf("%d ",arr[i]);
    }
printf("error in barcode");
}

}