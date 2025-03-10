#include <stdio.h>
#include <limits.h>


int main(){
    int arr[]= { 22 ,33 ,99 ,89 , 11, 83, 58 ,76};

int size = 10 , b[size];//correct declaration 
//int a = {2,3,4,4};//wrong declaration 
scanf("%d",&b[3]);
printf("%d\n",b[3]);//this gives the 4th element of the array ; 

//if the marks of any student is less than 35 print its roll number : 
int length = sizeof(arr) / sizeof(arr[0]);

    printf("The length of the array is: %d\n", length);
for(int i = 0 ; i< (sizeof(arr)/sizeof(arr[0]));i++){
if(arr[i]<35)
printf("The roll no of the student is %d \n",i);
}

int cal[] = { 1,2, 3, 4, 5,9,6,0};
//sum & prd
int sum = 0 , prd =1,  max = INT_MIN, min = INT_MAX;
//max =cal[0] ;
printf("%d\n",INT_MAX);
printf("%d\n",INT_MIN);

for(int i = 0 ; i< (sizeof(cal)/sizeof(cal[0]));i++){
   
sum+=cal[i];
prd*=cal[i];
if(cal[i]>max)
max=cal[i];
if(cal[i]<min)
min=cal[i];
}
printf("%d\n",sum);
printf("%d\n",prd);
printf("%d\n",max);
printf("%d\n",min);

    int inc[] = {2, 3, 4, 5, 1, 6, 7};
    int si = sizeof(inc) / sizeof(inc[0]); // Calculate the size of the array.

    for (int i = 0; i < si; i++) {
        if (i % 2 == 0) {
            inc[i] += 10; // Add 10 if the index is even.
        } else {
            inc[i] *= 2; // Multiply by 2 if the index is odd.
        }
    }

    // Print the modified array.
    printf("Modified array: ");
    for (int i = 0; i < si; i++) {
        printf("%d ", inc[i]);
    }
    printf("\n");

    return 0;
}
