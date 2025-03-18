#include <stdio.h>
typedef int* pointer;
int main(){
   int x =5 , y =7;
  
   // int* a=&x ,b =&y; //int* x and int y  -  this will generate an error
   pointer a=&x ,b =&y;
   printf("%p\n",a);
   printf("%p\n",b);


    return 0 ;
}