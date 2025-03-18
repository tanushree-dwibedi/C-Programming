// Typedef - &&  the multiple pointer declaration problem

#include <stdio.h>
#include <string.h>

typedef float realNumber ;//if we want to change the name of datatype float to realNumber we can use typedef
typedef int Integer;
int main(){
//int x =5;
Integer x =5 ;
realNumber y = 3.1415;
printf("%f\n",y);
printf("%d\n",x);

typedef struct book
{
//    char name[5];
char name[50];
   int noofpages;
   float price;
}book;
//}xy; // you can give any name here

book a;
book b;
struct book c;
struct book d;
b.noofpages=900;
b.price=4266.4;
strcpy(b.name,"exposed seven");


printf("%d\n",b.noofpages);
printf("%f\n",b.price);
printf("%s\n",b.name);

return 0 ;
}
