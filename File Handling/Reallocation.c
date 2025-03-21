#include <stdio.h>
#include <stdlib.h>

int main(){
    //int* ptr = malloc(10*4);//it is working without typecasting 
    int* ptr = (int*)malloc(10*4);//it is a good practice to typecast
    printf("%p\n",ptr);
    ptr = realloc(ptr,10*4);
    printf("%p\n",ptr);//for a small change it it giving the same address
    ptr = realloc(ptr,20*4);
    printf("%p\n",ptr);//but for a big change it is changeing the address 
}