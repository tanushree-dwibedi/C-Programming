//Passing array to function 
// arrays Pass by reference not pass by value 
//ints, doubles etc are passed by value not by reference 
//when you pass an array as an argument to a function , what actually gets passed ?
//address of the first element of the array 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fun(int a){
a = 7 ; 
}
void fun2(int a){
a = 7 ; 
}
void func(int arr[]){
    arr[0]=10;
    return ;
}
void swap(int arr[]){
int temp = arr[1];
arr[1]=arr[2];
arr[2]=temp;
return; 
}
int count(int arr[]){
    int c = 0 ;
    for(int i = 0 ; i<5;i++){
        if(arr[i]>2){
            c++;
        }
    }
    return c; 
}
int main(){
int a = 5 ; 


printf("%d\n",a);
fun2(a);
printf("%d\n",fun(a));
printf("%d\n",a);

int arr[5]= {1,35,4,2,7};

int evesum =0 , oddsum = 0 ;
for(int i = 0 ; i<sizeof(arr)/sizeof(arr[0]);i++){
    if(i%2==0)
    evesum+=arr[i];
    else
    oddsum+=arr[i];
}

printf("oddsum = %d\n",oddsum);
printf("Evesum = %d\n",evesum);
int diff = abs(oddsum-evesum);
printf("diff %d\n",diff);
printf("count = %d \n",count(arr));


printf("%d\n",arr[0]);
func(arr);
printf("%d\n",arr[0]);

printf("%d %d \n",arr[1],arr[2]);
swap(arr);
printf("%d %d \n",arr[1],arr[2]);

printf("%d \n",count(arr));
}