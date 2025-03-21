#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int n ; //4 bytes
    printf("Enter arrays size: ");
    scanf("%d",&n);
  //  int* arr = new int[n];// this new keyword can only be used in c++ for dynamic memory allocation
  int *arr = (int*)malloc(n*sizeof(int));
  int *p = arr;//this is done to preseve the address of the actual first pointer arr;
    for(int i = 0 ; i<n; i++){
        scanf("%d",&(*arr));
        arr++;
    }
    for(int i = 0 ; i<n; i++){
        printf("%d\n",*p);
        p++;
    }

int a = sizeof(int);
printf("%d",a);
a = sizeof(float);
printf("%d",a);
a = sizeof(double);
printf("%d",a);
a = sizeof(long);
printf("%d",a);
a = sizeof(char);
printf("%d",a);
a = sizeof(bool);
printf("%d\n",a);

//these 3 will store garbage value;
//malloc() in which blocks allocated have arbage value
int* ptr= (int*)malloc(10*sizeof(int));
ptr++;
printf("%d\n",*ptr);
ptr++;
printf("%d\n",*ptr);
ptr++;
printf("%d\n",*ptr);


//these 0 will store 0 if no value assighned;
//calloc() initialises all the allocated memory blocks with value 0;
int* pt= (int*)calloc(10,sizeof(int));
pt++;
printf("%d\n",*pt);
pt++;
printf("%d\n",*pt);
pt++;
printf("%d\n",*pt);

int* nullptr = NULL;

printf("%p",nullptr);
//00000000



}