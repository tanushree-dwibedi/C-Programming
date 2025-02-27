
#include <stdio.h>

int main() {
   int a = 25; 
   int b = 25; 
   int* x = &a; 
   int** y = &x;
   *x=7;
   **y=8;
   printf("%d\n",a);
      printf("%p\n",&a);
       printf("%d\n",b);
      printf("%p\n",&b);
      printf("%p\n",x);
      printf("%p\n",&x);
      printf("%p\n",y);
      printf("%p\n",&y);
      // printf("%d\n",*a);
      printf("%d\n",*x);
        printf("%p\n",*y);
      printf("%d\n",**y);
    return 0;
}