#include<stdio.h>
int main(){

    FILE* ptr = fopen("raghav.txt","r");
// this is just a way of opening the file
// then only we can perform other operations  

char str[100];
if(fgets(str,40,ptr)!= NULL)
printf("%s",str);// this will only print the first line

while (fgets(str,40,ptr)!= NULL)
printf("%s",str);// this will print all the lines



}