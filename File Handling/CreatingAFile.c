#include<stdio.h>

int main(){
    //creating a file 
    FILE* ptr = fopen("CW.txt","w");

    //writing content into the file , u can also modify it from here only
char str[] = "PW is the best sirf Placement lagegi yahin se";
fputs(str, ptr);
fclose(ptr);
//u must always close a file after u are done with it

}