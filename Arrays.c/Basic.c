#include <stdio.h>
//array is a collection of similar datatypes 
// array me continuous memory allocation hoti he 
int main(){
    int arr[]={2,3,4,5,1};
printf("%d \n",arr[3]);
arr[4]=100;//{2,3,4,5,100}
printf("%d \n",arr[4]);
// printf("%d",arr[5]);//Index out of bound error
// printf("%d",arr[10]);//Index out of bound error
// printf("%d",arr[-1]);//Index out of bound error
int ar[4];
ar[0]=3;
ar[3]=3;
ar[2]=2;
ar[1]=2;
printf("%d \n",ar[2]);
for(int i = 0  ; i<4;i++){
    printf("%d ",ar[i]);
}
printf("\n");
float a[3] = { 3.3, 4.4 , 5.5};
printf("%f \n",a[2]);
char c[4]={'a','A', '2', '%'};
// printf("%d \n",c[3]);
// printf("%d \n",c[0]);
// printf("%d \n",c[1]);
// printf("%d \n",c[2]);
// printf("%c \n",c[3]);
// printf("%c \n",c[0]);
// printf("%c \n",c[1]);
// printf("%c \n",c[2]);
    return 0;
}