#include <stdio.h>
#include <string.h>

// puts(), gets()
int main(){
char str[]="Collage wallah is best";
printf("%s",str);//not str[] wrong
puts(str);//puts can only be used for printing strings
puts("Hello everyone");//puts automatically adds a \n

char input1[40];


// METHOD - 1 
//if you are taking input using scanf only the first word will be considered
  scanf("%s",input1);//dont write &input here 
 printf("%s",input1);// but here the problem is the output will only print 1 word
// after the space the words will not be printed


// METHOD - 2
char input2[40];

gets(input2);// this will print the entire sentence 
printf("%s",input2);
// puts(input2);

// METHOD - 3
char input3[40];

scanf("%[^\n]s",input3);//use this method in exams 
printf("%s",input3);

// this entire code is running weird idk whi

return 0 ;
}