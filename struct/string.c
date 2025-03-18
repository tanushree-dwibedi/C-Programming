#include <stdio.h>
#include <string.h>

int main(){
struct book
{
//    char name[5];
char name[50];
   int noofpages;
   float price;
}a,b,c;
a.noofpages=100;
a.price=422.4;
// a.name="Secret seve";//this will generate an error , you cannot initialise a string like this ;
// whenever you declare an array or speciallya a character array  you have to initialise it right away or else it will generate an error
a.name[0]='S';
a.name[1]='e';
a.name[2]='v';
a.name[3]='e';
a.name[4]='n';
// this is still not the best soln

strcpy(a.name,"Secret seven");

// char ch[]= "Secret Seven";//this is correct
// char ch[13]= "Secret Seven";//this is also correct

// the below code will generate an error
// char ch[13];
// ch = "Secret seven";
// printf("%s",ch);

//the below code is correct 
char ch[13];
strcpy(ch,"Secret Seven");
printf("%s\n",ch);

printf("%d\n",a.noofpages);
printf("%f\n",a.price);
printf("%s\n",a.name); 

// similarly for b too
b.noofpages=900;
b.price=4266.4;
strcpy(b.name,"exposed seven");


printf("%d\n",b.noofpages);
printf("%f\n",b.price);
printf("%s\n",b.name);
return 0;
}

