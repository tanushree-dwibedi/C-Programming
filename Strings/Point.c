#include <stdio.h>
#include <string.h>


int main() {
   char str[]= "Collage wallah";
   char* ptr = str;
   ptr = "Physics Wallah";//no change
// * means fetch and change value
   char* p = str;
   *p = 'P';// change 

   printf("%s\n",str);


// Implement : Copy one string to another
char s1[]="Physics Wallah";

// shallow copy
char *s2=s1;
// Lets change in s1
s1[0]='M';
printf("%s\n",s1);
printf("%s\n",s2);//this is known as a shallow copy
// here s2 points to the same character array and hence, change in s1 is also reflect in s2 


// Deep copy
char s4[]="Physics Wallah";
char s3[]="Physics Wallah";
s3[0]='M';
printf("%s\n",s4);
printf("%s\n",s3);

char a1[]="hey";
char a2[4];
// s2= s1 // not allowed

char* a3="hey";
char* a4;
a3=a4;
printf("%s\n",a4);
printf("%s\n",a3);
    return 0;
}