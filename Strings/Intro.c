#include <stdio.h>

int main(){

    int a[4] = {1,2,3,4};
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
    printf("%p\n",&a[3]);
    char arr[5]={'a','t','l','a','\0'};//this is better
      // char arr[5]={'a','t','l','a'};
       printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);

//lets print character array with null character \0;
int i =0;
while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
}

//char ar[]="Hello\0";
char ar[]="Hello";
int j =0;
while(ar[j]!='\0'){
    printf("%c",ar[j]);
    j++;
}



char ch = '\0';
printf("\n %d",ch);
//ascii value of '0' -> 48 
//ascii value of '\0' -> 0

int x = 0;
char b = (char)x; // a -> '\0'  //it dosent get printed
printf("%c \n",b);

//initializing a string 
//Assigning string literal without size 
//char str[13]="PhysicsWallah";//this is wrong size
// char str[14]="PhysicsWallah";//you can write this 
// char str[20]="PhysicsWallah";//you can also write this but wastage of space
char str[]="PhysicsWallah";//here there are total 13 characters but +'\0' the null character 
//size of the str is 14;
int size = sizeof(str)/sizeof(str[0]);
printf("%d \n",size);
// print individual characters
printf("%c \n",str[5]);
printf("%d \n",str[10]);
//modify individual characters
str[0]='M';
str[1]=97;
printf("%c \n",str[0]);
printf("%c \n",str[1]);

int k =0;
while(str[k]!='\0'){
    //4 ways of printing perticular elements 
     printf("%c",k[str]);
    // printf("%c",str[k]);
    // printf("%c",*(str+k));
    //     printf("%c",*(k+str));
    
    k++;
}

    return 0 ;
}